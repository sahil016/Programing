from tkinter import *
from tkinter import ttk
from db import *  # Assuming you have a DB connection setup here


def register():
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
    gender = StringVar(value="Male")
    male = Radiobutton(root, text="Male", value="Male", variable=gender, font=("Arial", 10))
    male.place(x=150, y=180)
    female = Radiobutton(root, text="Female", value="Female", variable=gender, font=("Arial", 10))
    female.place(x=220, y=180)

    # City
    city_label = Label(root, text="City *", font=("Arial", 12))
    city_label.place(x=30, y=220)
    city_combobox = ttk.Combobox(root, width=27, font=("Arial", 10), state="readonly")
    city_combobox["values"] = ("City1", "City2", "City3")  # Add actual city names here
    city_combobox.place(x=150, y=220)

    # State
    state_label = Label(root, text="State *", font=("Arial", 12))
    state_label.place(x=30, y=260)
    state_combobox = ttk.Combobox(root, width=27, font=("Arial", 10), state="readonly")
    state_combobox["values"] = ("State1", "State2", "State3")  # Add actual state names here
    state_combobox.place(x=150, y=260)

    # Register Button
    register_button = Button(root, text="Register", bg="orange", fg="white", font=("Arial", 12, "bold"),
                             command=lambda: sub(root, name_entry.get(), contact_entry.get(), email_entry.get(), gender.get(), city_combobox.get(), state_combobox.get()))
    register_button.place(x=150, y=320)

    root.mainloop()
    

def sub(root, name, contact, email, gender, city, state):
    # Assuming you have the database connection and cursor from db.py
    # Create a query to insert the user data into the database
    query = """
        INSERT INTO user (name, contact, email, gender, city, state) 
        VALUES (%s, %s, %s, %s, %s, %s)
    """
    args = (name, contact, email, gender, city, state)
    
    try:
        # Execute the query (ensure mycursor and mydb are defined in your db.py)
        mycursor.execute(query, args)
        mydb.commit()
        print("Data inserted successfully") 

        # Close the current registration window after successful registration
        root.destroy()
    except Exception as e:
        print(f"Error inserting data: {e}")
        # Optionally, you could add an error message in the Tkinter window itself


# Call the register function to start the Tkinter window

