from tkinter import *
from tkinter import messagebox
from db import *
from register_form import *
from check import *

# Functions for button actions
def open_check_in_window():
    messagebox.showinfo("Check In",)

def open_guest_list_window():
    messagebox.showinfo("Guest List", "Guest List functionality to be implemented.")

def open_check_out_window():
    messagebox.showinfo("Check Out", "Check Out functionality to be implemented.")

def open_get_info_window():
    messagebox.showinfo("Get Info", "Guest Info functionality to be implemented.")

# Create the main window
window = Tk()
window.title("Hotel Management")
window.state("zoomed")  # Maximized the window
window.configure(bg="lightgray")

# Left Frame: Contains the buttons
left_frame = Frame(window, bg="lightgrey")
left_frame.place(relx=0.1, rely=0.15)  # Adjust positioning as needed

# Title
welcome_label = Label(window, text="WELCOME", font=("Bahnschrift SemiBold Condensed", 36, "bold"), bg="lightgrey")
welcome_label.place(relx=0.4, rely=0.05)

# Button properties
button_font = ("Arial", 18)
button_width = 30
button_height = 2

buttons = [
    ("1. CHECK IN", checkwin),
    ("2. SHOW GUEST LIST", open_guest_list_window),
    ("3. CHECK OUT", open_check_out_window),
    ("4. GET INFO OF ANY GUEST", open_get_info_window),
    ("5. EXIT", window.quit),
]

# Add buttons in the left frame
for idx, (text, command) in enumerate(buttons):
    button = Button(left_frame, text=text, font=button_font, width=button_width, height=button_height, bg="Light Gray", relief="raised", command=command)
    button.pack(pady=10)

# Right Frame: Contains the branding text
right_frame = Frame(window, bg="lightgrey")
right_frame.place(relx=0.6, rely=0.2)  # Adjust positioning as needed

branding_label1 = Label(right_frame, text="HOTEL MANAGEMENT", font=("Bahnschrift SemiBold Condensed", 30, "bold"), bg="lightgrey", fg="black")
branding_label1.pack(pady=10)

branding_label2 = Label(right_frame, text="PYTHON TKINTER", font=("Bahnschrift SemiBold Condensed", 30, "bold"), bg="lightgrey", fg="black")
branding_label2.pack(pady=10)

branding_label3 = Label(right_frame, text="GUI", font=("Bahnschrift SemiBold Condensed", 100, "bold"), bg="lightgrey", fg="black")
branding_label3.pack(pady=20)

# Run the application
window.mainloop()
