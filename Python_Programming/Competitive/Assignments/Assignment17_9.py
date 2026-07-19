def CountDigits(No):
    Count = 0

    while No > 0:
        No = No // 10
        Count = Count + 1

    return Count


def main():
    Value = int(input("Enter a number: "))

    Ret = CountDigits(Value)

    print("Count of digits is:", Ret)


if __name__ == "__main__":
    main()