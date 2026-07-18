from functools import reduce

Add = lambda No1,No2 : No1 + No2

def main():
    Data = list(map(int, input("Enter the numbers: ").split()))

    Result = reduce(Add, Data)

    print("Addition is:", Result)

if __name__ == "__main__":
    main()