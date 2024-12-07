from abc import ABC

class Employee(ABC):
    def salary(slef):
        pass


class Riddhi(Employee):
    def salary(slef):
        print("Riddhi got 20k")



class Antima(Employee):
    def salary(self):
        print("Antima got 24k")

class Imtisal(Employee):
    def salary(slef):
        print("Imtisal got 40k")

obj = Riddhi()
obj.salary()
obj1 = Antima()
obj1.salary()
obj2 = Imtisal()
obj2.salary()
