d = {}
import random
ac_no=random.randint(100000000000001 , 900000000000009)
balance = 5000

class bank: 
    def register(self):
        name=input("Enter your name : ")
        email=input("Enter email : ")
        password = int(input("Enter Password :"))
        cpassword = int(input("Enter Confirm Password :"))

        self.balance=balance
        if password==cpassword:
            print("Register Sucessfully!!")

            print("Your generated accout number is : ",ac_no)
            print("Your balance is : ",balance)

            d['name']=name
            d['email']=email
            d['password']=password
            d['ac_no']=ac_no

        else:
            print("password and confirm password dioes not match!!")
        

    def log(slef):
        ac_no=input("Enter accpont number : ")
        password=input("Enter password : ")
        print("Your balance is : ",balance)
        if d['ac_no']==ac_no:

            if d['password']==password:
                print("Login sucessfully!!")

            else:
                print("Invalid password!!")
        else:
            print("Invalid account number!!")

    
    def we(self):
        wamount=int(input("Enter wirhdraw amount : "))

        if wamount>balance:
            print("Invalid balance!!")

        else:
            self.balance = self.balance-wamount
    
    def de(self):
        damount=int(input("Enter deposit amount : "))

        self.balance=self.balance-damount

    # def check(slef):
    #     print("Your available balance is  : ",self.balance)

    def check(self):
        print('Your available balance is : ',self.balance)

obj=bank()
