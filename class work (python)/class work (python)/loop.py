""" n = int(input("Enter n1: "))

if n%2==0:
    print("Even")

elif n==0:
    print("Zero")

else:
    print("Odd")

i =1 #start

while(i<=10): #end
    print(i)
    i+=1 #increment

i=10 #start
while (i>=1): #condition
    print(i)
    i-=1 #dectrement 

a = int (input("Enter Number: "))

while(a>=1): #end
    print(a)
    a-=1 #increment



i = 1
ev=0
od=0
sum=0
sum1=0
while(i<=5):
    n  = int(input("Enter number : "))

    if n%2==0:
        print(n,"is even")
        ev+=1
        sum+=n
    else:
        print(n,"is odd")
        od+=1
        sum1+=n

    i+=1

print("Count of even : ",ev)
print("Count of odd : ",od)
print("Sum of even : ",sum)
print("Sum of odd : ",sum1)


import random

while True:
    n = int(input("Enter a number between 1 and 50: "))
    choice = random.randrange(1,50)

    if n < choice:
        print(n, "is less than the choice")
    elif n == choice:
        print(n, "is equal to the choice")
        break
    else:
        print(n, "is greater than the choice")
    """


""" n=6
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
        print("Number is greater than original number");     """




