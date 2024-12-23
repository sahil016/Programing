from tkinter import * 
from tkinter import messagebox
from db import *

# Functions for button actions
def open_check_in_window():
    messagebox.showinfo("Check In", "Check In functionality to be implemented.")

def open_guest_list_window():
    messagebox.showinfo("Guest List", "Guest List functionality to be implemented.")

def open_check_out_window():
    messagebox.showinfo("Check Out", "Check Out functionality to be implemented.")

def open_get_info_window():
    messagebox.showinfo("Get Info", "Guest Info functionality to be implemented.")

# Create the main window
window = Tk()
window.title("Hotel Management")
window.geometry("900x500")
window.configure(bg="lightgrey")

# Title and Welcome labels
welcome_label = Label(window, text="WELCOME", font=("Bahnschrift SemiBold Condensed", 24, "bold"), bg="lightgrey")
welcome_label.place(x=400, y=20)

# Buttons for actions   
buttons = [
    ("1. CHECK IN", open_check_in_window),
    ("2. SHOW GUEST LIST", open_guest_list_window),
    ("3. CHECK OUT", open_check_out_window),
    ("4. GET INFO OF ANY GUEST", open_get_info_window),
    ("5. EXIT", window.quit),
]

for i, (text, command) in enumerate(buttons):
    button = Button(window, text=text, font=("Arial", 14), width=40, height=2, command=command, bg='Light Gray', relief="raised")
    button.place(x=100, y=80 + i * 60)

# Branding labels on the right
branding_label1 = Label(window, text="HOTEL MANAGEMENT", font=("Bahnschrift SemiBold Condensed", 25, "bold"), bg="lightgrey", fg="black")
branding_label1.place(x=550, y=80)

branding_label2 = Label(window, text="PYTHON TKINTER", font=("Bahnschrift SemiBold Condensed", 23, "bold"), bg="lightgrey", fg="black")
branding_label2.place(x=570, y=130)

branding_label3 = Label(window, text="GUI", font=("Bahnschrift SemiBold Condensed", 75, "bold"), bg="lightgrey", fg="black")
branding_label3.place(x=620, y=180)

# Run the application
window.mainloop()
