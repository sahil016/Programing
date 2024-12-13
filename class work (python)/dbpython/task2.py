from crudpyth import *

mydb = pymysql.connect(host="localhost",user="root",password="",database="mydb36")
mycursor = mydb.cursor()

while True:
    menu = """
    press 1 for insert data 
    press 2 for update data
    press 3 for delete data
    press 4 for fetch data
    press 5 for exit

    """
    print(menu)

    choice = int(input("Enter Choice : "))
    if choice ==1:
        name=input("Enrter name : ")
        price=int(input("Enter price : "))

        query="insert into customer(name,price) values('%s','%s')"
        args=(name,price)

        mycursor.execute(query % args)
        mydb.commit()
        print("Data inserted sucessfully!!")
    
    elif choice==2:
        id=int(input("Enter id : "))
        name=input("Enter name : ")
        price=input("Enter price :")

<<<<<<< HEAD
        query="UPDATE customer SET name = %s, price = %s WHERE id = %s"
=======
        query="update customer set name=%s,price=%s where id=%s"
>>>>>>> 30b43997758186c8f662be461d5045f3fa893ae7
        args=(name,price,id)

        mycursor.execute(query , args)
        mydb.commit()
        print("Data Updated sucessfuly!!")
    elif choice==3:
        id=int(input("Enter id : "))
        query="delete from customer where id='%s'"
        args = (id)
        mycursor.execute(query , args)

        print("Data deleted sucessfully!!")

    elif choice==4:
        query="select * from customer"

        mycursor.execute(query)
        data=mycursor.fetchall()

        print(data)
    
    elif choice==5:
        print("Thank you!!")
        break
    else:
        print("Invalid choice!!")
        break