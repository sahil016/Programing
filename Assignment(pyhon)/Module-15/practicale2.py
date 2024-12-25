 
# 13) Write a Python program to show single inheritance. 
""" 
class A:
    def fun1(slef):
        print("This is function 1")
class B(A):
    def fun2(self):
        print("This is function 2")
        
obj = B()
B.fun1()
B.fun2()
 """
 
# 14) Write a Python program to show multilevel inheritance. 

""" class grandparent():
    def __init__(self):
        print("grandparent class called!!")
class parent(grandparent):
    def __init__(self):
        super().__init__()
        print("parent class called!!")
class child(grandparent,parent):
    def __init__(self):
        super().__init__()
        print("child class called!!")
obj = child()  """

# 15) Write a Python program to show multiple inheritance.

""" class Father:
    def __init__(self):
        print("Father class constructor called!")

class Mother:
    def __init__(self):
        print("Mother class constructor called!")

class Child(Father, Mother):
    def __init__(self):
        # Call both parent constructors
        Father.__init__(self)  # Explicitly call Father's constructor
        Mother.__init__(self)  # Explicitly call Mother's constructor
        print("Child class constructor called!")

obj = Child()        
 """

# 16) Write a Python program to show hierarchical inheritance. 
"""
class Parent:
    def __init__(self):
        print("Parent class constructor called!")

    

class Child1(Parent):
    def __init__(self):
        super().__init__()
        print("Child1 class constructor called!")

class Child2(Parent):
    def __init__(self):
        super().__init__()
        print("Child2 class constructor called!")


child1_obj = Child1()


child2_obj = Child2()
 """



# 17) Write a Python program to show hybrid inheritance. 
""" class Grandparent:
    def __init__(self):
        print("Grandparent class constructor called!")

class Parent1(Grandparent):
    def __init__(self):
        super().__init__()
        print("Parent1 class constructor called!")

class Parent2(Grandparent):
    def __init__(self):
        super().__init__()
        print("Parent2 class constructor called!")

class Child(Parent1, Parent2):
    def __init__(self):
        super().__init__()  # Resolves based on MRO
        print("Child class constructor called!")

# Create an object of the Child class
child_obj = Child()
 """


# 18) Write a Python program to demonstrate the use of super() in inheritance. 


""" class A:
    def fun1(slef):
        print("This is function 1")
class B(A):
    def fun1(self):
        super().fun1()
        print("This is function 2")
        
obj = B()
obj.fun1()

"""


# 19) Write a Python program to show method overloading. 
# 20) Write a Python program to show method overriding. 
""" class A:
    def add(self, a, b=0):
        return a + b

# Create an object of the class
calc = A()

# Call the method with one or two arguments
print(calc.add(5))      # Output: 5
print(calc.add(5, 10))  # Output: 15 """


