from tkinter import *
from tkinter import messagebox
from db import *  # Ensure db.py properly sets up your MySQL connection and cursor

def insert():
    name = ename.get()
    email = eemail.get()
    mobile = emobile.get()
    password = epassword.get()
    cpassword = ecpassword.get()
    if password != cpassword:
        messagebox.showerror("Error", "Password does not match")
        return
    mycursor.execute("INSERT INTO customer (name, email, mobile, password) VALUES (%s, %s, %s, %s)",
                     (name, email, mobile, password))
    mydb.commit()
    messagebox.showinfo("Success", "User registered successfully!")


def open_delete_window():
    # Create a new window
    delete_window = Toplevel(root)
    delete_window.title("Delete Record")
    delete_window.geometry("300x200")
    
    # Label and Entry for ID
    delete_label = Label(delete_window, text="Enter ID to Delete:", font=("Arial", 12))
    delete_label.pack(pady=10)
    
    delete_id_entry = Entry(delete_window, bg="yellow", font=("Arial", 12))
    delete_id_entry.pack(pady=5)
    
    # Function to perform deletion
    def delete_record():
        user_id = delete_id_entry.get()
        if not user_id:
            messagebox.showerror("Error", "ID is required to delete a record!", parent=delete_window)
            return
        
        try:
            # Check if the ID exists
            mycursor.execute("SELECT * FROM customer WHERE id = %s", (user_id,))
            record = mycursor.fetchone()
            if not record:
                messagebox.showerror("Error", f"No record found with ID {user_id}", parent=delete_window)
                return
            
            # Delete the record
            mycursor.execute("DELETE FROM customer WHERE id = %s", (user_id,))
            mydb.commit()
            messagebox.showinfo("Success", f"User with ID {user_id} deleted successfully!", parent=delete_window)
            delete_id_entry.delete(0, END)
        except Exception as e:
            messagebox.showerror("Error", str(e), parent=delete_window)
    
    # Add Delete Button in the delete_window
    delete_button = Button(delete_window, text="Delete", font=("Arial", 12, "italic"), fg="red", command=delete_record)
    delete_button.pack(pady=20)


def update_window():
    update_window = Toplevel(root)
    update_window.title("Update Record")
    update_window.geometry("400x400")

    name = Label(root, text="Name", font=("Arial", 12, "bold"))
    name.place(x=50, y=100)

    email = Label(root, text="Email", font=("Arial", 12, "bold"))
    email.place(x=50, y=150)

    mobile = Label(root, text="Mobile", font=("Arial", 12, "bold"))
    mobile.place(x=50, y=200)

    password = Label(root, text="Password", font=("Arial", 12, "bold"))
    password.place(x=50, y=250)

    cpassword = Label(root, text="Confirm Password", font=("Arial", 12, "bold"))
    cpassword.place(x=50, y=300)

    def update_record():
        new_name = Label(root, text="Name", font=("Arial", 12, "bold"))
        new_name.place(x=50, y=100)

        new_email = Label(root, text="New-Email", font=("Arial", 12, "bold"))
        new_email.place(x=50, y=150)

        new_mobile = Label(root, text="New-Mobile", font=("Arial", 12, "bold"))
        new_mobile.place(x=50, y=200)

        new_password = Label(root, text="Password", font=("Arial", 12, "bold"))
        new_password.place(x=50, y=250)

        cpassword = Label(root, text="Confirm Password")


        try:
            mycursor.execute("UPDATE customer SET name=%s, email=%s, mobile=%s, password=%s WHERE id=%s",
                             (new_name, new_email, new_mobile, new_password))
            mydb.commit()
            messagebox.showinfo("Success", f"Record with name {name} updated successfully!")
            update_window.destroy()
        except Exception as e:
            messagebox.showerror("Database Error", str(e))

    Button(update_window, text="Update", font=("Arial", 12, "italic"), fg="green", command=update_record).pack(pady=20)
    

# Main Window Setup
root = Tk()
root.geometry('500x500')
root.title("Signup Form")

# Labels and Entry Fields
name = Label(root, text="Name", font=("Arial", 12, "bold"))
name.place(x=50, y=100)

email = Label(root, text="Email", font=("Arial", 12, "bold"))
email.place(x=50, y=150)

mobile = Label(root, text="Mobile", font=("Arial", 12, "bold"))
mobile.place(x=50, y=200)

password = Label(root, text="Password", font=("Arial", 12, "bold"))
password.place(x=50, y=250)

cpassword = Label(root, text="Confirm Password", font=("Arial", 12, "bold"))
cpassword.place(x=50, y=300)

# Buttons
insert = Button(root, text="Insert", font=("Arial", 16, "italic"), fg="red", command=insert)
insert.place(x=50, y=350)

update = Button(root, text="Update", font=("Arial", 16, "italic"), fg="red",command=update_window)
update.place(x=150, y=350)

delete = Button(root, text="Delete", font=("Arial", 16, "italic"), fg="red", command=open_delete_window)
delete.place(x=270, y=350)

login = Button(root, text="Log", font=("Arial", 16, "italic"), fg="red")
login.place(x=370, y=350)

# Entry Fields
ename = Entry(root, bg="yellow")
ename.place(x=250, y=110)

eemail = Entry(root, bg="yellow")
eemail.place(x=250, y=160)

emobile = Entry(root, bg="yellow")
emobile.place(x=250, y=210)

epassword = Entry(root, bg="yellow")
epassword.place(x=250, y=260)

ecpassword = Entry(root, bg="yellow")
ecpassword.place(x=250, y=310)

root.mainloop()