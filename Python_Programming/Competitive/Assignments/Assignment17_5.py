def ChkPrime(No):
    if No <= 1:
        return False

    for i in range(2, No):
        if No % i == 0:
            return False

    return True


def main():
    Value = int(input("Enter a number: "))

    Ret = ChkPrime(Value)

    if Ret:
        print("Prime Number")
    else:
        print("Not a Prime Number")


if __name__ == "__main__":
    main()