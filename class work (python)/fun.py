""" def myfun(n): #perameters

    for i in range(1,n+1):
        print("*"*i)

n = int(input("Enter Number : "))
myfun(n) #arguments """

# def myfun(n):
#     n = int(input("Enter Number : "))

    
# a = int(input("Enter the first number: "))
# b = int(input("Enter the second number: "))
# c = int(input("Enter the third number: "))

# if a >= b and a >= c:
#     Greatest  = a
# elif b >= a and b >= c:
#     Greatest   = b
# else:
#     Greatest  = c

# print("Greatest  number is :", Greatest )

# def find_max(a, b, c):
#     if a >= b and a >= c:
#         print("The maximum number is:", a)
#     elif b >= a and b >= c:
#         print("The maximum number is:", b)
#     else:
#         print("The maximum number is:", c)

# a = int(input("Enter the first number: "))
# b = int(input("Enter the second number: "))
# c = int(input("Enter the third number: "))

# find_max(a, b, c)
""" 
def myfun():
    n = int(input("Enter Numeber : "))
    fac=1

    for i in range(1,n+1):
        fac*=i
    
    return fac

result = myfun()
print(result) """


# def myfun(a, b, c):
#     if a >b:
#         return a
#     elif b >c:
#         return b
#     else:
#         return c

# a = int(input("Enter the first number: "))
# b = int(input("Enter the second number: "))
# c = int(input("Enter the third number: "))

# greatest = myfun(a, b, c)
# print("The maximum number is:", greatest)


""" 
import random

n = random.randint(10001,9999)
print(n)

import math


print(math.sqrt(25))
print(math.factorial(5)) """

import random
n=random.randint(1,31)
while True:
    print("Guess the number 1 to 30")

    choice= int(input("Enter choice: "))

    if(choice==n):
        print("Win!!")
        break
    elif choice>30:
        print("Invalid choice!!")
        break
    elif choice<n:
        print("Number is less than original number")
    elif choice>n:
        print("Number is greater than original number"); 