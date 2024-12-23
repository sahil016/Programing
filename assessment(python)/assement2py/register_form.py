from tkinter import *
from db import * 
from tkinter import ttk

def register():
   
    name=name
    contact=contact
    email=email
    gender=gender
    city=city
    state=state

    mycursor.execute("Insert in to user (name,contact,email,gender,city,state) values(%s,%s,%s,%s,%s)",
                     (name,contact,email,gender,city,state))
    mydb.commit()

    print("Registration successful!")

# Create the main window
root = Tk()
root.title("Registration Form")
root.geometry("400x400")
root.resizable(False, False)

# Header Label
header = Label(root, text="Please enter details below", bg="orange", fg="white", font=("Arial", 14, "bold"))
header.pack(fill=X)

# Form fields
# Name
name = Label(root, text="Name *", font=("Arial", 12))
name.place(x=30, y=60)
name = Entry(root, width=30, font=("Arial", 10))
name.place(x=150, y=60)

# Contact
contact = Label(root, text="Contact *", font=("Arial", 12))
contact.place(x=30, y=100)
contact = Entry(root, width=30, font=("Arial", 10))
contact.place(x=150, y=100)

# Email
email = Label(root, text="Email *", font=("Arial", 12))
email.place(x=30, y=140)
email = Entry(root, width=30, font=("Arial", 10))
email.place(x=150, y=140)

# Gender
gender = Label(root, text="Gender *", font=("Arial", 12))
gender.place(x=30, y=180)
gender = StringVar(value="Male")
male = Radiobutton(root, text="Male", value="Male", variable=gender, font=("Arial", 10))
male.place(x=150, y=180)
female = Radiobutton(root, text="Female", value="Female", variable=gender, font=("Arial", 10))
female.place(x=220, y=180)

# City
city = Label(root, text="City *", font=("Arial", 12))
city.place(x=30, y=220)
city = ttk.Combobox(root, width=27, font=("Arial", 10), state="readonly")
city["values"] = ("City1", "City2", "City3")  # Add actual city names here
city.place(x=150, y=220)

# State
state = Label(root, text="State *", font=("Arial", 12))
state.place(x=30, y=260)
state = ttk.Combobox(root, width=27, font=("Arial", 10), state="readonly")
state["values"] = ("State1", "State2", "State3")  # Add actual state names here
state.place(x=150, y=260)

# Register Button
register = Button(root, text="Register", bg="orange", fg="white", font=("Arial", 12, "bold"), command=register)
register    .place(x=150, y=320)

root.mainloop()