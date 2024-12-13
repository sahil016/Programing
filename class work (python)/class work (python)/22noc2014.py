""" class A:
    def fun1(self):
        print("Funtion1")
class B(A):
    def fun2(self):
        print("Function2")
class C(B):
    def fun3(self):
        print("Function3")
        
obj = C()
obj.fun1()
obj.fun2()
obj.fun3()

 """
 
class LogIn:
    def __init__(self, username, password):     
        self.username = username
        self.password = password
        class LogInSystem(LogIn):
            def __init__(self, username, password, email):
                super().__init__(username, password)
                self.email = email
                def log_in(self):
                    print(f"Logging in with username: {self.username}, password: {self.password}, email
                          : {self.email}")
                    