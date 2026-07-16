def CheckPrime(No):
    

    for i in range(2, No):
        if No % i == 0:
            return False

    return True

def main():
    No = int(input("Enter the number: "))

    Ret = CheckPrime(No)

    if Ret:
        print(No, "is a Prime Number")
    else:
        print(No, "is Not a Prime Number")

if __name__ == "__main__":
    main()