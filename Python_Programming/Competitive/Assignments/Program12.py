def CountDigit(NO1):
    count = 0

    while NO1 > 0:
        NO1 = NO1 // 10
        count += 1

    return count


def main():
    No = int(input("Enter the number: "))
    
    Ret = CountDigit(No)

    print("Count of Digits is:", Ret)


if __name__ == "__main__":
    main()