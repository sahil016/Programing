""" s = input("Enter String: ")

#antima

if len(s)%2==0:
    print(s)
else:
    s1=int(len(s)/2)
    print(s[s1-1]+s[s1]+s[s1+1])

def palindrome():#defination 
    s=input("Enter Name: ")
    s1 = s[::-1]

    if s==s1:
        print("Palindrome!!")
    else:
        print("Not palindrome!!")

# palindrome()#call


def middllechr():
     n = input("Enter String: ")

     if len(n)%2==0:
         print(n)
     else:
         n1=int(len(n)/2)
         print(n[n1-1]+n[n1]+n[n1+1])  

def petterm():
    for i in range(1,6):
        print("*"*i)


print("press 1 for palindrome")
print("press 2 for middle character")
print("press 3 for pettern")
print("press 4 for exit")

while True:
   
    choice = int(input("Enter your chooice: "))
    if choice==1:
        palindrome()
    elif choice==2:
        middllechr()
    elif choice==3:
        petterm()
    elif choice==4:
        break
       


 """