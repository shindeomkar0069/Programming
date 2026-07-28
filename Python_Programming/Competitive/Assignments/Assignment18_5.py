def IsPrime(No):
    
    for i in range(2, No):
        if No % i == 0:
            return False

    return True


def AdditionPrime(No):
    Sum = 0

    for i in range(2, No + 1):
        if IsPrime(i):
            Sum = Sum + i

    return Sum


def main():
    Value = int(input("Enter a number: "))

    Result = AdditionPrime(Value)

    print("Addition of prime numbers is:", Result)


if __name__ == "__main__":
    main()