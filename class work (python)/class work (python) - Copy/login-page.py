import random

n = random.randint(1001,9999)
d = {}

while True:
    menu="""
    press 1 for signup
    press 2 for Login
    press 3 for Forgot-password
    press 4 for Exit
"""
    print(menu)
    choice = int(input("Enter your choice : "))

    if choice==1:
        print("****************Welcome to sing up******************")
        name=input("Enter Name: ")
        email=input("Enter Email: ")
        mobile=int(input("Enter Mobile Number: "))
        password=int(input("Enter Password : "))
        cpassword=int(input("Enter Confirm Password : "))

        if password==cpassword:
            d['name']=name
            d['email']=email
            d['password']=password
            d['mobile']=mobile
            print("Signup sucessfully!!")

        else:
            print("Password and cofirm password does not match!!")

    elif choice==2:
        print("*********Welcome to Login page************")
        email=input("Enter Email : ")
        password=int(input("Enter password : "))

        if d['email']==email:
            if d['password']==password:
                print("Login sucessfully!!")

            else:
                print("password does not match")

        else:
            print("email does not match")

    elif choice==3:
        print("********welcome to forgot_password page******************")
        mobile=int(input("Enter mobile number"))

        if d['mobile']==mobile:
            print("*******your otp is : ",n)

            otp =int(input("Enter otp : "))

            if n==otp:
                password=int(input("Enter New password : "))
                d['password']=password
                print("Password updates sucessfully!!")

            else:
                print("Invalid OTP!!")
        else:
            print("Mobile number does not exist!!")

    elif choice==4:
        print("Thank you!!")
        break
    else:
        print("Invalid choice!!")
        break