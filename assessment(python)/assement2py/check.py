import tkinter as tk
from tkinter import messagebox
def checkwin():
    def validate_input():
        name = name_entry.get()
        address = address_entry.get()
        phone = phone_entry.get()
        days = days_entry.get()
        room_type = room_var.get()
        payment_method = payment_var.get()

        if not name:
            messagebox.showerror("Error", "Name has not been inputted!")
            return
        if not address:
            messagebox.showerror("Error", "Address has not been inputted!")
            return
        if not phone.isdigit() or len(phone) != 10:
            messagebox.showerror("Error", "Invalid input. Please input a valid mobile number!")
            return
        if not days.isdigit() or int(days) <= 0:
            messagebox.showerror("Error", "Please input a valid number of days!")
            return
        
        messagebox.showinfo("Submission Success", "All details have been inputted correctly!")

    # Root window
    root = tk.Tk()
    root.title("Check-In Page")
    root.geometry("800x500")

    root.resizable(False, False)

    # Title
    title_frame = tk.Frame(root)
    title_frame.pack(pady=10)
    tk.Label(title_frame, text="YOU CLICKED ON", font=("Arial", 14, "bold")).grid(row=0, column=0, padx=5)
    tk.Label(title_frame, text=":", font=("Arial", 14, "bold")).grid(row=0, column=1, padx=5)
    tk.Label(title_frame, text="CHECK IN", font=("Arial", 14, "bold")).grid(row=0, column=2, padx=5)

    # Input Fields
    input_frame = tk.Frame(root)
    input_frame.pack(pady=10, padx=20, anchor="w")

    tk.Label(input_frame, text="ENTER YOUR NAME", font=("Arial", 12)).grid(row=0, column=0, sticky="w", pady=5)
    name_entry = tk.Entry(input_frame, width=30, font=("Arial", 12))
    name_entry.grid(row=0, column=1, padx=10)
    tk.Button(input_frame, text="OK", font=("Arial", 10), command=lambda: None).grid(row=0, column=2)

    tk.Label(input_frame, text="ENTER YOUR ADDRESS", font=("Arial", 12)).grid(row=1, column=0, sticky="w", pady=5)
    address_entry = tk.Entry(input_frame, width=30, font=("Arial", 12))
    address_entry.grid(row=1, column=1, padx=10)
    tk.Button(input_frame, text="OK", font=("Arial", 10), command=lambda: None).grid(row=1, column=2)

    tk.Label(input_frame, text="ENTER YOUR NUMBER", font=("Arial", 12)).grid(row=2, column=0, sticky="w", pady=5)
    phone_entry = tk.Entry(input_frame, width=30, font=("Arial", 12))
    phone_entry.grid(row=2, column=1, padx=10)
    tk.Button(input_frame, text="OK", font=("Arial", 10), command=lambda: None).grid(row=2, column=2)

    tk.Label(input_frame, text="NUMBER OF DAYS", font=("Arial", 12)).grid(row=3, column=0, sticky="w", pady=5)
    days_entry = tk.Entry(input_frame, width=10, font=("Arial", 12))
    days_entry.grid(row=3, column=1, padx=10)
    tk.Button(input_frame, text="OK", font=("Arial", 10), command=lambda: None).grid(row=3, column=2)

    # Room Type
    room_label = tk.Label(root, text="CHOOSE YOUR ROOM", font=("Arial", 12))
    room_label.pack(anchor="w", padx=20, pady=10)

    room_frame = tk.Frame(root)
    room_frame.pack(anchor="w", padx=40)
    room_var = tk.StringVar(value="Deluxe")

    room_options = [("Deluxe", "Deluxe"), ("Full Deluxe", "Full Deluxe"), ("General", "General"), ("Joint", "Joint")]
    for text, value in room_options:
        tk.Checkbutton(room_frame, text=text, font=("Arial", 12), variable=tk.StringVar(value=value)).pack(side="left", padx=10)

    # Payment Method
    payment_label = tk.Label(root, text="CHOOSE PAYMENT METHOD", font=("Arial", 12))
    payment_label.pack(anchor="w", padx=20, pady=10)

    payment_frame = tk.Frame(root)
    payment_frame.pack(anchor="w", padx=40)
    payment_var = tk.StringVar(value="By cash")
    tk.Checkbutton(payment_frame, text="By cash", font=("Arial", 12), variable=tk.StringVar(value="By cash")).pack(side="left", padx=10)
    tk.Checkbutton(payment_frame, text="By credit/debit card", font=("Arial", 12), variable=tk.StringVar(value="By credit/debit card")).pack(side="left", padx=10)

    # Submit Button
    submit_button = tk.Button(root, text="SUBMIT", font=("Arial", 12, "bold"), command=validate_input)
    submit_button.pack(pady=20)

    root.mainloop()
