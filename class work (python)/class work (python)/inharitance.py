""" class A:
    def fun1(self):
        print("This is Function 1!!")

class B:
    def fun2(self):
        print("This is Function 2!!")

class C(A,B):
    def fun3(self):
        print("This is Function 3!!")

obj = C()
obj.fun1()
obj.fun2()
obj.fun3()
 """
""" 
class A:
    def fun1(self):
        print("This is Function 1!!")

class B(A):
    def fun2(self):
        print("This is Function 2!!")

class C(A):
    def fun3(self):
        print("This is Function 3!!")

obj = C()
obj2 = B()
obj.fun1()
obj2.fun2()
obj.fun3()
 """

""" 
class A:
    def fun1(self):
        print("This is Function 1!!")

class B(A):
    def fun2(self):
        print("This is Function 2!!")

class C:
    def fun3(self):
        print("This is Function 3!!")

class D(B,C):
    def fun4(self):
        print("This is Function 4!!")

obj = D()
obj.fun1()
obj.fun2()
obj.fun3()
obj.fun4() """
""" 
class A:
    def fun1(self):
        print("Fun1!!")

class B(A):
    def fun1(slef):
        super().fun1()
        print("Fun2!!")

obj = B()
obj.fun1() """


""" 
class A:
    def fun1(self):
        print("Fun1!!")

class B:
    def fun1(slef):
        super().fun1()
        print("Fun2!!")

class C(B,A):
    def fun1(self):
        super().fun1()
        print("Fun3!!")

obj = C()
obj.fun1()
"""


class A:
    def fun1(slef):
        l=[1,2,3]
        l2=[6,7,8]
        
        d={}

        for i in range(0,3):
            d[l[i]]=l2[i]

        print(d)
        
class B(A):
    def fun1(self):
        super().fun1()
        l = [10, "hello", 30]
        l2 = [60, 70, True]

        d = {}
        for i in range(0, 3):
            d[l[i]] = l2[i]
        
        print(d)


obj=B() 
obj.fun1()