#  file = open("C:\Users\SHAHIL\OneDrive\Desktop\py.txt","w+")
# file.write("This is w+ method")
# print(file.tell())
# file.seek(5)
# print(file.readline())
# file.close() 

""" 
try:
    n = int(input("Enter Number : "))
    fac=1
    for i in range(1,n+1):
        fac*=i

    print(fac)

except ValueError as e:
    print(e)

else:
    print("Try executed!!")

finally:
    print("Finally called!!")

 """


try:
    n = int(input("Enter Number 1 : "))
    n1 = int(input("Enter Number 2 : "))
    
    print("Division : ",n/n1)

except ValueError as e:
    print(e)

except ZeroDivisionError as e:
    print(e)
