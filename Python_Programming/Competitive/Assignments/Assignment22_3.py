from multiprocessing import Pool

def CountPrime(No):
    Count = 0

    for i in range(2, No + 1):
        Prime = True

        for j in range(2, i):
            if i % j == 0:
                Prime = False
                break

        if Prime:
            Count += 1

    return Count

def main():
    Data = list(map(int, input("Enter the Elements: ").split()))

    p = Pool()

    Result = p.map(CountPrime, Data)

    p.close()
    p.join()

    print(Result)

if __name__ == "__main__":
    main()