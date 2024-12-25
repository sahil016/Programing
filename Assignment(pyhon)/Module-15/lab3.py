## Write Python programs to demonstrate different types of inheritance (single, multiple, multilevel, etc.). 
    #single
""" class parent():
    def __init__(self):
        print("parent class called!!")
class child(parent):
    def __init__(self):
        print("child class called!!")
obj = child() 
 """
 
    #multiple
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
    #multilevel
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

    #Hierarchical 
""" class Parent:
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

    #Hybrid 
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