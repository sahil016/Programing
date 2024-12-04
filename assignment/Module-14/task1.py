###############################    Accessing List       ##########################################


# Lab:
# • Write a Python program to create a list with elements of multiple data types (integers,strings, floats, etc.).
# Create a list with multiple data types
""" my_list = [25, "Hello", 3.14, True, None, "Python", 42]

# Print the list
print("List with multiple data types:", my_list)

# Accessing individual elements by index
print("Element at index 0:", my_list[0])  # 25 (integer)
print("Element at index 1:", my_list[1])  # "Hello" (string)
print("Element at index 2:", my_list[2])  # 3.14 (float)
print("Element at index 3:", my_list[3])  # True (boolean)


 """

# • Write a Python program to access elements at different index positions.
""" # Create a sample list with different elements
my_list = [10, "Hello", 3.14, True, "Python", 42]

# Accessing elements at different index positions
print("Element at index 0:", my_list[0])  # 10 (first element)
print("Element at index 1:", my_list[1])  # "Hello" (second element)
print("Element at index 2:", my_list[2])  # 3.14 (third element)
print("Element at index 3:", my_list[3])  # True (fourth element)
print("Element at index 4:", my_list[4])  # "Python" (fifth element)
print("Element at index 5:", my_list[5])  # 42 (sixth element)

# Accessing elements using negative indexing (from the end)
print("Element at index -1:", my_list[-1])  # 42 (last element)
print("Element at index -2:", my_list[-2])  # "Python" (second-to-last element)
print("Element at index -3:", my_list[-3])  # True (third-to-last element) """



# Practical Examples:
# 1. Write a Python program to create a list of multiple data type elements.
""" # Create a list with elements of different data types
my_list = [100, "Hello World", 3.14, True, None, "Python", 42.5]

# Print the list
print("List with multiple data types:", my_list)

# Access and print individual elements from the list
print("Integer element:", my_list[0])  # 100
print("String element:", my_list[1])   # "Hello World"
print("Float element:", my_list[2])    # 3.14
print("Boolean element:", my_list[3])  # True
print("None element:", my_list[4])     # None
print("Another string element:", my_list[5])  # "Python"
print("Float element:", my_list[6])    # 42.5 """



# 2. Write a Python program to find the length of a list using the len() function.
""" # Create a sample list
my_list = [10, "Hello", 3.14, True, "Python", 42]

# Find the length of the list using len() function
list_length = len(my_list)

# Print the length of the list
print("The length of the list is:", list_length)
 """
 
 
 #################################  2. List Operations  #############################

#  Write a Python program to add elements to a list using insert() and append().
""" # Create a sample list
my_list = [10, 20, 30]

# Add an element at the end of the list using append()
my_list.append(40)
print("List after append:", my_list)  # [10, 20, 30, 40]

# Add an element at a specific index using insert()
my_list.insert(1, 15)  # Insert 15 at index 1
print("List after insert:", my_list)  # [10, 15, 20, 30, 40]
 """

#   



# Practical Examples: 
# 3) Write a Python program to update a list using insert() and
# append(). 
# 4) Write a Python program to remove elements from a list using pop() and remove().
