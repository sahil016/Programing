
## Write a Python program to handle exceptions in a simple calculator (division by zero, invalid input). AND ## Write a Python program to demonstrate handling multiple exceptions. 
def calculator():
    try:
        # Display operation menu
        op = """
        Press 1 for Addition 
        Press 2 for Subtraction
        Press 3 for Multiplication
        Press 4 for Division
        """
        print(op)

        # Take inputs from the user
        n1 = float(input("Enter the first number: "))
        n2 = float(input("Enter the second number: "))
        op1 = int(input("Enter your choice (1/2/3/4): "))

        # Perform the operation based on user choice
        if op1 == 1:
            print(f"The result of addition is: {n1 + n2}")
        elif op1 == 2:
            print(f"The result of subtraction is: {n1 - n2}")
        elif op1 == 3:
            print(f"The result of multiplication is: {n1 * n2}")
        elif op1 == 4:
            if n2 == 0:
                raise ZeroDivisionError
            print(f"The result of division is: {n1 / n2}")
        else:
            print("Invalid operation choice. Please select 1, 2, 3, or 4.")

    except ValueError:
        print("Invalid input. Please enter numbers only.")
    except ZeroDivisionError:
        print("Error: Division by zero is not allowed.")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

        # # Run the calculator
        # calculator()
