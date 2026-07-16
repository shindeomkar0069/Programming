def Reverse(No):
    rev = 0

    while No > 0:
        digit = No % 10
        rev = rev * 10 + digit
        No = No // 10

    return rev

def main():
    No = int(input("Enter a number: "))

    Ret = Reverse(No)

    print("Reversed number is:", Ret)

if __name__ == "__main__":
    main()