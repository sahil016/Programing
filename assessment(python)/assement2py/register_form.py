from tkinter import *
from db import *  # Ensure this is properly defined elsewhere
from tkinter import ttk

def register():
    # Function to handle the registration logic
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
name_label = Label(root, text="Name *", font=("Arial", 12))
name_label.place(x=30, y=60)
name_entry = Entry(root, width=30, font=("Arial", 10))
name_entry.place(x=150, y=60)

# Contact
contact_label = Label(root, text="Contact *", font=("Arial", 12))
contact_label.place(x=30, y=100)
contact_entry = Entry(root, width=30, font=("Arial", 10))
contact_entry.place(x=150, y=100)

# Email
email_label = Label(root, text="Email *", font=("Arial", 12))
email_label.place(x=30, y=140)
email_entry = Entry(root, width=30, font=("Arial", 10))
email_entry.place(x=150, y=140)

# Gender
gender_label = Label(root, text="Gender *", font=("Arial", 12))
gender_label.place(x=30, y=180)
gender_var = StringVar(value="Male")
male_radio = Radiobutton(root, text="Male", value="Male", variable=gender_var, font=("Arial", 10))
male_radio.place(x=150, y=180)
female_radio = Radiobutton(root, text="Female", value="Female", variable=gender_var, font=("Arial", 10))
female_radio.place(x=220, y=180)

# City
city_label = Label(root, text="City *", font=("Arial", 12))
city_label.place(x=30, y=220)
city_combo = ttk.Combobox(root, width=27, font=("Arial", 10), state="readonly")
city_combo["values"] = ("City1", "City2", "City3")  # Add actual city names here
city_combo.place(x=150, y=220)

# State
state_label = Label(root, text="State *", font=("Arial", 12))
state_label.place(x=30, y=260)
state_combo = ttk.Combobox(root, width=27, font=("Arial", 10), state="readonly")
state_combo["values"] = ("State1", "State2", "State3")  # Add actual state names here
state_combo.place(x=150, y=260)

# Register Button
register_button = Button(root, text="Register", bg="orange", fg="white", font=("Arial", 12, "bold"), command=register)
register_button.place(x=150, y=320)

root.mainloop()