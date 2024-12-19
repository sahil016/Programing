from tkinter import *

def login():
    root=Tk()
    root.geometry("500x500")
    root.title("Login-Form")

    email = Label(root,test="Email",font=("Arial",12,"bold"))
    email.place(x=50,y=50)

    eemail = Entry(root,gb="yellow")
    eemail.place(x=250,y=60)

    password = Label(root,test="Password",font=("Arial",12,"bold"))
    password.place(x=50,y=100)

    epassword = Button(root,bg="yellow")
    epassword.place(x=150,y=110)

    update = Button(root,text="Login",font=("Arial",16,"italic"),fg="red")
    update.place(x=150,y=1)

    root.mainloop