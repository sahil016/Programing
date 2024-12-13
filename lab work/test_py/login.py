import pymysql

mydb = pymysql.connect(host="localhost",user="root",password="",database="mydb36")
mycurser = mydb.cursor()

mycurser.execute('create table if not exists User(id int primary key auto_increment,name varchar(20),U_password varchar(200))')
mydb.commit()

l="Register"
print(l.center(50,'*'))

name=input("Enter your name : ")
U_password=input("Enter your password : ")

query="insert into User(name,U_password) values(%s,%s)"
args=(name,U_password)
mycurser.execute(query , args)
mydb.commit()

mycurser.execute(query, args)
print("Login".center(50, '*'))
user=input("Enter your name : ")
U_password=input("Enter your password : ")
mycurser.execute("select * from User where name=%s and U_password=%s",(user,U_password))
login_data=mycurser.fetchone()

if login_data:
    print("Login Successfull")
else:
    print("Invalid username or password")   

"""      
user=input("Enter your name : ")
U_password=input("Enter your password : ")
mycurser.execute("select * from User where name=%s and U_password=%s",(user,U_password))
login_data=mycurser.fetchone()
if login_data:
    print("Login Successfull")
else:
    print("Invalid username or password")    """
    
