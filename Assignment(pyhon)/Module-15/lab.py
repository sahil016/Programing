##  Write a Python program to print a formatted string using print() and f-string. 

""" # Define some variables
name = "Alice"
age = 30
height = 5.6

# Using print() with concatenation
print("Name: " + name + ", Age: " + str(age) + ", Height: " + str(height))

# Using f-string for formatting
print(f"Name: {name}, Age: {age}, Height: {height}")
 """
 
 
 
## Write a Python program to read a name and age from the user and print a formatted output. 
 
"""  # Read name and age from the user
name = input("Enter your name: ")
age = int(input("Enter your age: "))

# Print a formatted output using f-string
print(f"Hello, {name}! You are {age} years old.")

"""
 
 
##  Write a Python program to open a file in write mode, write some text, and then close it. 
   
# Open the file in write mode
""" with open(r'D:\Programing\Assignment(pyhon)\Module-15\task.txt', 'w') as file:
    # Write some text to the file
    file.write("Hello, this is a test.\n")
    file.write("This text is written to the file in write mode.\n")

# The file is automatically closed after the 'with' block
print("Text has been written to 'example.txt'.")
 """



## Write a Python program to create a class and access its properties using an object. 
""" class Person:
    # Constructor to initialize the properties
    def __init__(self, name, age):
        self.name = name  # Public property
        self.age = age    # Public property

    # Method to display details
    def display_details(self):
        print(f"Name: {self.name}, Age: {self.age}")

# Create an object of the class
person1 = Person("Alice", 25)

# Access properties of the object
print("Accessing Properties:")
print(f"Name: {person1.name}")
print(f"Age: {person1.age}")

# Call a method of the class
print("\nCalling Method:")
person1.display_details()       
 """
 
 
 

      