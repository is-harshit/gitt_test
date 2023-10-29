
def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    if y == 0:
        return "Cannot divide by zero"
    return x / y

def calculator():
    while True:
        print("================")
        print("Enter 'add' for addition")
        print("Enter 'subtract' for subtraction")
        print("Enter 'multiply' for multiplication")
        print("Enter 'divide' for division")
        print("Enter 'quit' to end the program")
        print("================")
        ch = input(": ")

        if ch == "quit":
            break

        if ch in ("add", "subtract", "multiply", "divide"):
            num1 = float(input("Enter first number: "))
            num2 = float(input("Enter second number: "))

            if ch == "add":
                print("Result: ", add(num1, num2))
            elif ch== "subtract":
                print("Result: ", subtract(num1, num2))
            elif ch == "multiply":
                print("Result: ", multiply(num1, num2))
            elif ch == "divide":
                print("Result: ", divide(num1, num2))
        else:
            print("Invalid input. Please enter a valid operation.")

calculator()
