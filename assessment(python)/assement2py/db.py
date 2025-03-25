import pymysql

mydb = pymysql.connect(host="localhost",user="root",password="")
mycursor = mydb.cursor()

mycursor.execute("create database if not exists hotel")
mydb.commit()


mydb = pymysql.connect(host="localhost",user="root",password="",database="hotel")
mycursor = mydb.cursor()

mycursor.execute("create table if not exists user(id int primary key auto_increment,name varchar(20),contact bigint,email varchar(25), gender varchar(10),city varchar (15),state varchar (15) )")
mydb.commit()


