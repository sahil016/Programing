# capitalize()	Converts the first character to upper case

A = input("Enter a string: ")

s = A.capitalize()

print(s) #Capitalized string
print(len(s)) #counts the lengnth of string
print(s.casefold()) # Converting the string to case-folded format
print(s.lower()) #lowercase
print(s.upper()) #uppercae
print(s.center(35,"*")) #center of string
print(s.count("r")) # Counting occurrences of the letter "r" in the string  
print(s.find("r",6))# Finding the position of "r" 
print(s.index("A"))# Finding the index of "P" in the string (throws an error if not found)
print(s.isalnum()) #Checking if the string is alphanumeric
print(s.replace("r","w")) # Replacing all occurrences of "r" with "w" in the string
print(s.swapcase())  # Swapping the case of each letter in the string
print(s.title()) # Converting the first letter of each word in the string to uppercase