from django.db import models
from django.contrib import admin
# Create your models here.
from django.db import models

class Student(models.Model):
    name = models.CharField(max_length=100)
    email = models.EmailField(unique=True)
    age = models.IntegerField()
    date_joined = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return self.name

class User(models.Model):
    email = models.EmailField(max_length=254)
    name = models.CharField(max_length=25)
    password = models.CharField(max_length=25)
    
    
class Doctor(models.Model):
    name = models.CharField(max_length=255)
    specialization = models.CharField(max_length=255)
    experience = models.IntegerField()
    phone = models.CharField(max_length=15)
    email = models.EmailField()
    clinic_address = models.TextField()
    available_days = models.CharField(max_length=255)

    
class Appointment(models.Model):
    user = models.ForeignKey(User, on_delete=models.CASCADE) 
    doctor = models.ForeignKey('Doctor', on_delete=models.CASCADE)
    appointment_date = models.DateField()
    appointment_time = models.TimeField()
    payment_amount = models.DecimalField(max_digits=10, decimal_places=2)

    def __str__(self):
        return f"{self.user.username} - {self.doctor.name} ({self.appointment_date})"
    

# Customize the Django admin panel
class DoctorAdmin(admin.ModelAdmin):
    list_display = ('name', 'specialization', 'experience', 'phone', 'email', 'available_days')
    list_filter = ('specialization', 'experience', 'available_days')
    search_fields = ('name', 'specialization', 'email')
    readonly_fields = ('email',)
    fieldsets = (
        ('Personal Info', {
            'fields': ('name', 'profile_picture')
        }),
        ('Professional Details', {
            'fields': ('specialization', 'experience')
        }),
        ('Contact Details', {
            'fields': ('phone', 'email', 'clinic_address')
        }),
        ('Availability', {
            'fields': ('available_days',)
        })
    )


class Payment(models.Model):
    appointment = models.OneToOneField(Appointment, on_delete=models.CASCADE)
    payment_id = models.CharField(max_length=100, unique=True)
    amount = models.DecimalField(max_digits=10, decimal_places=2, default=1000)  # Fixed amount
    status = models.CharField(max_length=20, default="Success")  # Success, Failed

    def __str__(self):
        return f"Payment {self.payment_id} - {self.status}"
    
    
# Register the model with the customized admin panel
admin.site.register(Doctor, DoctorAdmin)