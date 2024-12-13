""" class parent:
    def __init__(self):
        self.x = 0
        self.y = 0

    def add(self):
        self.x += 1
        self.y += 1

class child(parent):
    def __init__(self):
        super().__init__()  # Initialize parent class attributes

    def add(self):  # Override the add method
        super().add()
        self.x += 1

# Create an instance of the child class
obj = child()
obj.add()  # Calls the overridden add method
print("x:", obj.x)  # x will be incremented
print("y:", obj.y)  # y will remain 0 because the child class's add method doesn't modify y
 """
 
class Grand_parent:
    def __init__(self):
        print("Grand parents")

class parent(Grand_parent):
    def __init__(self):
        super().__init__()
        print("Parent")

class child(Grand_parent):
    def __init__(self):
        super().__init__()
        print("Child")
class kid(parent,child):
    def __init__(self):
        super().__init__()
        print("Kid")
        
A=kid()