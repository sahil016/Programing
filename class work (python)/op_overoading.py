""" class User:
    def __init__(self,a,b):
        print("Constructur called")

        self.a=a
        self.b=b

    def __str__(self):
        print("str called!!")

        return f"{self.a},{self.b}"
    
    def __sub__(self,obj):
        print("sub called !!")

        x=self.a-obj.a
        y=self.b-obj.b

        return x,y
    
obj=User(10,20)
print(obj)

obj2=User(30,40)
print(obj2)
print("Addition : ",obj-obj2)



class User2:
    def __init__(self,a,b):
        print("Constructur called")

        self.a=a
        self.b=b

    def __str__(self):
        print("str called!!")

        return f"{self.a},{self.b}"
    
    def __add__(self,obj):
        print("add called !!")

        x=self.a+obj.a
        y=self.b+obj.b

        return x,y
    
obj=User2(10,20)
print(obj)

obj2=User2(30,40)
print(obj2)
print("Addition : ",obj+obj2)


class User3:
    def __init__(self,a,b):
        print("Constructur called")

        self.a=a
        self.b=b

    def __str__(self):
        print("str called!!")

        return f"{self.a},{self.b}"
    
    def __mul__(self,obj):
        print("sub called !!")

        x=self.a*obj.a
        y=self.b*obj.b

        return x,y
    
obj=User3(10,20)
print(obj)

obj2=User3(30,40)
print(obj2)
print("Addition : ",obj*obj2)
 """