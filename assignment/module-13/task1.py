
# print("Hello, World!!")

#print("sahil")

# This program calculates the area of a rectangle and prints the result




#Write a Python program that demonstrates the correct use of indentation, comments, and variables following PEP 8 guidelines. 

""" 
def calculate_area(width, height):
    #Calculate the area of a rectangle.
    return width * height

def main():
    width = float(input("Enter the width of the rectangle: "))
    height = float(input("Enter the height of the rectangle: "))
    area = calculate_area(width, height)
    print(f"The area of the rectangle is: {area}")

main()  # main() will execute when the script is run """




#Write a Python program to demonstrate the creation of variables and different data types. 
""" a=100
b='hello'
c=3.14
d=True
print(a,b,c,d)  # Output: 100 hello 3.14 True
 """


# • Practical Example 1: How does the Python code structure work? 
""" class a():
    def fun1(slef):
        print("thi is fun1")
class b(a):
    def fun2(self):
        print("this is fun2")           
        
obj = b
obj.fun1()
obj.fun2()


# • Practical Example 2: How to create variables in Python? 

A = 120
B = "Python"
C = 3.14
D = True
print(A,B,C,D)  # Output: 120 Python 3.14 True
 """
 
# Practical Example 3: How to take user input using the input() function. 
""" n = input("Enter your name")
print(n)
 """

# Practical Example 4: How to check the type of a variable dynamically using type(). 
""" A = 123
B = "Python"
C = 3.14
D = True
print(type(A))  # Output: <class 'int'>
print(type(B))  # Output: <class 'str'>
print(type(C))  # Output: <class 'float'>
print(type(D))  # Output: <class 'bool'>


 """
 
 
 #• Practical Example 5: Write a Python program to find greater and less than a number using if_else. 
""" 
a=10
b=20
if a>b:
    print("a is greater than b")
else:
    print("a is less than b")
 
 
  """
 
 
 # • Practical Example 6: Write a Python program to check if a number is prime using if_else. 
n = int(input("Enter number: "))
for i in range(2, n):
    if (n % i) == 0:
        print(n, "is not a prime number")
    else:
        print(n, "is a prime number")


 
 
 
 # • Practical Example 7: Write a Python program to calculate grades based on percentage using if-else ladder. 
 # Get user input for percentage
""" percentage = float(input("Enter your percentage: "))

# Determine the grade based on percentage
if percentage >= 90:
    grade = "A+"
elif percentage >= 80:
    grade = "A"
elif percentage >= 70:
    grade = "B"
elif percentage >= 60:
    grade = "C"
elif percentage >= 50:
    grade = "D"
else:
    grade = "F"

# Display the result
print(f"Your grade is: {grade}") """
 
 
 
 
 
 
 
 # • Practical Example 8: Write a Python program to check if a person is eligible to donate blood using a nested if. 
"""  # Get user input for age and weight
age = int(input("Enter your age: "))
weight = float(input("Enter your weight in kilograms: "))

# Check eligibility using nested if statements
if age >= 18:
    if weight >= 50:
        print("You are eligible to donate blood.")
    else:
        print("You are not eligible to donate blood because your weight is below 50 kg.")
else:
    print("You are not eligible to donate blood because you are under 18 years old.")
 """
