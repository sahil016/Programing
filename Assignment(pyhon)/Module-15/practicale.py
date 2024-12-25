# 1. Write a Python program to print “Hello, World!” on the screen. 

""" s='Hello, World!'
print(s)  # Output: Hello, World!
 """    

# 2) Write a Python program to read a string, an integer, and a float from the keyboard and display them. 
""" # Read input from the user
n1 = input("Enter a string: ")
n2 = int(input("Enter an integer: "))
n3 = float(input("Enter a float: "))

# Display the inputs
print("\nYou entered:")
print(f"String: {n1}")
print(f"Integer: {n2}")
print(f"Float: {n3}")

 """

# 3), 4) Create a File and Write a String into It
# Create a file and write a string into it
f = open(r"D:\Programing\Assignment(pyhon)\Module-15\task.txt", "w")
f.write("Hello, World!")
f.close()

# 5) Read a File and Print the Data on the Console
# Read a file and print the data on the console
f = open(r"D:\Programing\Assignment(pyhon)\Module-15\task.txt", "r")
data = f.read()
print(data)
f.close()

# 6) Check the Current Position of the File Cursor Using `tell()`
# Check the current position of the file cursor using tell()
f = open(r"D:\Programing\Assignment(pyhon)\Module-15\task.txt", "r")
f.read(5)
print(f.tell())  # Output: 5
f.close()


# 7) Write a Python program to handle exceptions in a calculator. 

""" def calculator():
    try:
        # Display operation menu
 
        print("Press 1 for Addition ")
        print("Press 2 for Subtraction")
        print("Press 3 for Multiplication")
        print("Press 4 for Division")


        # Take inputs from the user
        n1 = float(input("Enter the first number: "))
        n2 = float(input("Enter the second number: "))
        op1 = int(input("Enter your choice (1/2/3/4): "))

        # Perform the operation based on user choice
        if op1 == 1:
            print(f"The result of addition is: {n1 + n2}")
        elif op1 == 2:
            print(f"The result of subtraction is: {n1 - n2}")
        elif op1 == 3:
            print(f"The result of multiplication is: {n1 * n2}")
        elif op1 == 4:
            if n2 == 0:
                raise ZeroDivisionError
            print(f"The result of division is: {n1 / n2}")
        else:
            print("Invalid operation choice. Please select 1, 2, 3, or 4.")

    except ValueError:
        print("Invalid input. Please enter numbers only.")
    except ZeroDivisionError:
        print("Error: Division by zero is not allowed.")
    except Exception as e:
        print(f"An unexpected error occurred: {e}") """


# 8) Write a Python program to handle multiple exceptions (e.g., file not found, division by zero). 
""" try:
    # Input numbers
    n = int(input("Enter number 1 : "))
    n2 = int(input("Enter number 2 : "))
    
    # Perform division
    result = n / n2
    print("Result:", result)

except ZeroDivisionError:
    print("Cannot divide by zero.")
except ValueError:
    print("Invalid input. Please enter valid numbers.")
 """

# 9) Write a Python program to handle file exceptions and use the finally block for closing the file. 
""" try:
    # Attempt to open the file in read mode
    file = open("D:\\Programing\\Assignment(pyhon)\\Module-15\\task.txt", "r")
    print("File opened successfully.")
    print(file.read())
except FileNotFoundError:
    print("File not found. Please check the file name and path.")
except Exception as e:
    print(f"An error occurred: {e}")
finally:
    # Ensure the file is closed if it was opened
    if 'file' in locals():
        file.close()
        print("File closed.")
 """


# 10) Write a Python program to print custom exceptions. 
# Define a custom exception
""" class CustomError(Exception):
    pass

# Function to demonstrate custom exceptions
def check_value(value):
    if value < 0:
        raise CustomError("Value cannot be negative.")
    elif value == 0:
        raise CustomError("Value cannot be zero.")
    print(f"Valid value: {value}")

# Test the function
try:
    check_value(-1)  # Raises a custom exception
except CustomError as e:
    print(f"Error: {e}")
 """


# 11) Write a Python program to create a class and access the properties of the class using an object. 

# Define a class
""" class Person:
    def __init__(self, name, age):
        self.name = name  # Property to store the name
        self.age = age    # Property to store the age

    def fun(self):
        print(f"Name: {self.name}, Age: {self.age}")

# Create an object of the class
person1 = Person("Alice", 25)

# Access the properties of the class
print(f"Person's Name: {person1.name}")
print(f"Person's Age: {person1.age}")

# Call the method of the class
person1.fun()
 """


# 12) Write a Python program to demonstrate the use of local and global variables in a class. 
""" a=5
class ex:
    def fun(self):
        b=25
        print(f"Local variable b: {b}")
        print(f"Global variable a: {a}")
        
obj = ex()
obj.fun()
 """
 
