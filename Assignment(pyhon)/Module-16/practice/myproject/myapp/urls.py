from django.urls import path,include
from .import views
from .views import create_student, get_students, update_student, delete_student

urlpatterns = [
    path('home',views.home,name='home'),
    path('contact/', views.contact, name='contact'),
    path('create/', create_student, name='create_student'),
    path('students/', get_students, name='get_students'),
    path('update/<int:student_id>/', update_student, name='update_student'),
    path('delete/<int:student_id>/', delete_student, name='delete_student'),
    path("register/", views.register, name="register"),
    path("login/", views.user_login, name="login"),
    path('read_doctors/', views.read_doctors, name='read_doctors'),
    path('create_doctor/', views.create_doctor, name='create_doctor'),
    path('update_doctor/<int:doctor_id>/', views.update_doctor, name='update_doctor'),
    path('delete_doctor/<int:doctor_id>/', views.delete_doctor, name='delete_doctor'),
    path('', views.doctor_list_view, name='doctor_list'),  # Serves the HTML page
    path('find_doctor/', views.find_doctor, name='find_doctor'),
    path('book_appointment/', views.book_appointment, name='book_appointment'),
    path('payment/<int:appointment_id>/', views.payment_page, name='payment_page'),
    path("payment/<int:appointment_id>/", views.payment_view, name="payment"),
    # Social auth
    path('auth/', include('social_django.urls', namespace='social')),
]

