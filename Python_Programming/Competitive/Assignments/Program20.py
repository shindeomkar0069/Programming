def Addition(No1, No2):
    return No1 + No2

def Subtraction(No1, No2):
    return No1 - No2

def Multiplication(No1, No2):
    return No1 * No2

def Division(No1, No2):
    if No2 == 0:
        return "Division by zero is not possible"
    return No1 / No2

def main():
    No1 = int(input("Enter first number: "))
    No2 = int(input("Enter second number: "))

    print("Addition =", Addition(No1, No2))
    print("Subtraction =", Subtraction(No1, No2))
    print("Multiplication =", Multiplication(No1, No2))
    print("Division =", Division(No1, No2))

if __name__ == "__main__":
    main()