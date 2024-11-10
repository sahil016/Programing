""" n = int(input("Enter Number : "))

for i in range(1,n+1):
    print(i) """


""" 
for i in range(1,4,1):
    
    n = int(input("Enter Number : "))
    if (n%2==0):
        print("even")
    else:
        print("odd") """


""" for i in range(1,6):
    for j in range(1,i+1):
        print("*",end="")
    
    print()


print("*"*30)

for i in range(1,6):
    for k in range(1,6-i):
        print(" ",end="")

    for j in range(1,i+1):
        print(" *",end="")
    
    print()

 """
 
""" for i in range(1,6):
    print("*"*i)

for i in range(1,6):
    print(" "*(6-i),"*"*i) 

n = int(input("Enter number : "))
fac=1

for i in range(1,n+1):
    fac*=i
print(fac)

n = int(input("Enter number : "))
prime=0

for i in range(1,n+1):
    if(n%i==0):
        prime+=1

if(prime==2):
    print(n,"is prime")
else:
    print("Not prime")"""
