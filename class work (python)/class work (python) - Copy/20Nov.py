""" try:
    l = [1,2,3,4]
    
    n = int(input("Enter Index : "))
    
    print("Value is : ",l[n])
    
except: 
    print("Invalid Index") """

# user_data = {
#     "user1": "password123",
#     "user2": "mypassword",
#     "user3": "secretpass"
# }

# try:
#     username = input("Enter your username: ")
    
   
#     if username not in user_data:
#         raise ValueError("Username does not exist.")
    
   
#     new_password = input("Enter your new password: ")
    
   
#     user_data[username] = new_password
#     print("Password has been reset successfully!")
        
# except ValueError as ve:
#     print(ve)
# except Exception as e:
#     print("An error occurred:", e)