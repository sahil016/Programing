""" class A:
    def fun(self):
        print("A fun")
class B(A):
    def fun(self):
        super().fun()  # Call the parent class method
        print("B fun")
class C(B):
    def fun(self):
        super().fun()  # Call the parent class method
        print("C fun")

object = C()
object.fun()  # Output: C fun """


d1={'r':12,'p':13,'q':14}
d2={'r':12,'q':14}
d3={}
for key in d1:
    if key in d2:
        d3[key]=d1[key]+d2[key]
    else:
        d3[key]=d1[key]
print(d3)