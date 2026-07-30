import threading

def IsPrime(No):
    if No <= 1:
        return False

    for i in range(2, No):
        if No % i == 0:
            return False

    return True

def ChkPrime(Data):
    print("Prime numbers are:")
    for No in Data:
        if IsPrime(No):
            print(No)

def ChkNonPrime(Data):
    print("Non-prime numbers are:")
    for No in Data:
        if not IsPrime(No):
            print(No)

def main():
    Data = list(map(int, input("Enter the Elements: ").split()))

    t1 = threading.Thread(target=ChkPrime, args=(Data,))
    t2 = threading.Thread(target=ChkNonPrime, args=(Data,))

    t1.start()
    t2.start()

    t1.join()
    t2.join()

    print("Exit from main")

if __name__ == "__main__":
    main()