def SumDigits(No):
    sum = 0

    while No > 0:
        digit = No % 10
        sum = sum + digit
        No = No // 10

    return sum

def main():
    No = int(input("Enter a number: "))

    Ret = SumDigits(No)

    print("Sum of digits is:", Ret)

if __name__ == "__main__":
    main()