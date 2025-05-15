from django.shortcuts import render,redirect
from .models import *
from django.http import JsonResponse
from django.shortcuts import render, get_object_or_404
from django.views.decorators.csrf import csrf_exempt
from django.views.decorators.http import require_POST, require_GET
from django.contrib.auth import authenticate, login
import razorpay 
import json
from django.conf import settings
# Create your views here.

def home(request):
    return render (request,'home.html')

from django.shortcuts import render
from django.http import HttpResponse

def contact(request):
    if request.method == "POST":
        name = request.POST.get("name")
        email = request.POST.get("email")
        message = request.POST.get("message")

        if name and email and message:
            return HttpResponse("Form submitted successfully!")
        else:
            return HttpResponse("Invalid form submission!", status=400)

    return render(request, "contact.html")

def create_student(request):
    student = Student.objects.create(name="Alice", email="alice@example.com", age=21)
    return HttpResponse(f"Student {student.name} created successfully!")

# Retrieve all students
def get_students(request):
    students = Student.objects.all()
    return render(request, "students.html", {"students": students})

# Update a student
def update_student(request, student_id):
    student = Student.objects.get(id=student_id)
    student.age = 25
    student.save()
    return HttpResponse(f"Student {student.name} updated!")

# Delete a student
def delete_student(request, student_id):
    student = Student.objects.get(id=student_id)
    student.delete()
    return HttpResponse(f"Student {student.name} deleted!")

def register(request):
    if request.method == 'POST':
        email=request.POST.get('email')
        name=request.POST.get('name')
        password=request.POST.get('password')
        
        user = User.objects.create(
            email=email,
            name=name,
            password=password
        )
        user.save()
        return render(request,'login.html')
    else:
        return render(request,'register.html')
    
    
def user_login(request):
    if request.method == "POST":
        email = request.POST['email']
        password = request.POST['password']

        try:
            user = User.objects.get(email=email)

            if user.password == password:  
                request.session['user_id'] = user.id  # ✅ Save user ID in session
                return redirect('doctor_list')
            else:
                msg = "Invalid Password!!"
                return render(request, 'login.html', {'msg': msg})
                
        except User.DoesNotExist:
            msg = "User does not exist!"
            return render(request, 'login.html', {'msg': msg})

    return render(request, 'login.html')



# Read all doctors
@require_GET
def read_doctors(request):
    doctors = list(Doctor.objects.values())
    return JsonResponse({'doctors': doctors}, safe=False)


@csrf_exempt  # If you still get a CSRF error, remove this and use the token in JS
@require_POST  # Allow only POST requests
def create_doctor(request):
    print("Received request:", request.method)  # Debugging print
    try:
        data = json.loads(request.body)
        doctor = Doctor.objects.create(
            name=data['name'],
            specialization=data['specialization'],
            experience=data['experience'],
            phone=data['phone'],
            email=data['email'],
            clinic_address=data['clinic_address'],
            available_days=data['available_days']
        )
        return JsonResponse({'message': 'Doctor added successfully', 'id': doctor.id})
    except json.JSONDecodeError:
        return JsonResponse({'error': 'Invalid JSON data'}, status=400)


# Update an existing doctor
@csrf_exempt
@require_POST
def update_doctor(request, doctor_id):
    try:
        data = json.loads(request.body)
        doctor = get_object_or_404(Doctor, id=doctor_id)
        doctor.name = data.get('name', doctor.name)
        doctor.specialization = data.get('specialization', doctor.specialization)
        doctor.experience = data.get('experience', doctor.experience)
        doctor.phone = data.get('phone', doctor.phone)
        doctor.email = data.get('email', doctor.email)
        doctor.clinic_address = data.get('clinic_address', doctor.clinic_address)
        doctor.available_days = data.get('available_days', doctor.available_days)
        doctor.save()
        return JsonResponse({'message': 'Doctor updated successfully', 'doctor_id': doctor.id})
    except json.JSONDecodeError:
        return JsonResponse({'error': 'Invalid JSON'}, status=400)

# Delete a doctor
@csrf_exempt
@require_POST
def delete_doctor(request, doctor_id):
    doctor = get_object_or_404(Doctor, id=doctor_id)
    doctor.delete()
    return JsonResponse({'message': 'Doctor deleted successfully'})

def doctor_list_view(request):
    return render(request, 'doctor_list.html')


def find_doctor(request):
    query = request.GET.get('search', '')

    if query:
        doctors = Doctor.objects.filter(name__icontains=query) | Doctor.objects.filter(specialization__icontains=query)
    else:
        doctors = Doctor.objects.all()

    if request.headers.get('X-Requested-With') == 'XMLHttpRequest':
        return JsonResponse({'doctors': list(doctors.values())})

    return render(request, 'find_doctor.html')

@csrf_exempt
def book_appointment(request):
    if request.method == "POST":
        if 'user_id' not in request.session:
            return JsonResponse({"message": "User is not logged in"}, status=401)

        user = User.objects.get(id=request.session['user_id'])
        data = json.loads(request.body)
        
        doctor_id = data.get("doctor_id")
        appointment_date = data.get("appointment_date")
        appointment_time = data.get("appointment_time")
        payment_amount = 1000  # Fixed amount

        try:
            doctor = Doctor.objects.get(id=doctor_id)
            appointment = Appointment.objects.create(
                user=user,
                doctor=doctor,
                appointment_date=appointment_date,
                appointment_time=appointment_time,
                payment_amount=payment_amount
            )

            return JsonResponse({
                "message": "Appointment booked successfully!",
                "appointment_id": appointment.id  # ✅ Send appointment ID
            })

        except Doctor.DoesNotExist:
            return JsonResponse({"message": "Doctor not found"}, status=404)

    return JsonResponse({"message": "Invalid request"}, status=400)

def payment_page(request, appointment_id):
    appointment = get_object_or_404(Appointment, id=appointment_id)
    return render(request, "payment.html", {"appointment": appointment})

def payment_view(request, appointment_id):
    try:
        appointment = Appointment.objects.get(id=appointment_id)
        return render(request, 'payment.html', {'appointment': appointment})
    except Appointment.DoesNotExist:
        return render(request, '404.html', {"message": "Appointment not found"})
    
    
razorpay_client = razorpay.Client(auth=(settings.RAZORPAY_KEY_ID, settings.RAZORPAY_KEY_SECRET))


def payment_view(request, appointment_id):
    appointment = Appointment.objects.get(id=appointment_id)

    client = razorpay.Client(auth=(settings.RAZORPAY_KEY_ID, settings.RAZORPAY_KEY_SECRET))

    order_amount = 1000 * 100  # Razorpay expects the amount in paisa (INR)
    order_currency = "INR"
    
    order = client.order.create({
        "amount": order_amount,
        "currency": order_currency,
        "payment_capture": "1"
    })

    context = {
        "appointment": appointment,
        "RAZORPAY_KEY_ID": settings.RAZORPAY_KEY_ID,  # Pass Razorpay Key
        "payment": {
            "amount": order_amount,
            "order_id": order["id"],  # Pass Order ID
        }
    }
    
    return render(request, "payment.html", context)


def payment_success(request):
    """Handle successful payment and update database."""
    if request.GET.get("razorpay_payment_id"):
        payment_id = request.GET["razorpay_payment_id"]
        appointment_id = request.session.get("appointment_id")

        try:
            appointment = Appointment.objects.get(id=appointment_id)
            Payment.objects.create(
                appointment=appointment,
                payment_id=payment_id,
                amount=1000,  # Fixed amount
                status="Success"
            )

            return render(request, "success.html", {"message": "Payment Successful!", "payment_id": payment_id})

        except Appointment.DoesNotExist:
            return render(request, "404.html", {"message": "Invalid appointment"})

    return render(request, "error.html", {"message": "Payment failed or invalid request."})