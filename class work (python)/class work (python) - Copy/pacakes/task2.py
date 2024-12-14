from task1 import *

print("press 1 for Register Account!!")
print("press 2 for Register Exit!!")

choice= int(input("Enter choice : "))

if choice==1:
    obj.register()

    print("press 1 for login")
    print("press 2 for exit")

    ch1=int(input("Enter choice : "))

    if ch1==1:
        obj.log()
        while True:
            menu="""
                press 1 for Deposit
                press 2 for Withdraw
                press 3 for check balance
                press 4 for exit

                """
            print(menu)
            ch2=int(input("Enter your choice :"))
            if ch2==1:
                obj.de()

            elif ch2==2:
                obj.we()

            elif ch2==3:
                obj.check()

            elif ch2==4:
                print("Thank you!!")
                break
            else:
                print("Invalid choice!!")

        else:
            print("Thank you!!")