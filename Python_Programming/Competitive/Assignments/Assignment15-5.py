from functools import reduce

Max = lambda No1,No2 : No1 if No1>No2 else No2

def main():
    Data = list(map(int, input("Enter the numbers: ").split()))

    Result = reduce(Max, Data)
    

    print("Maximum number is:", Result)

if __name__ == "__main__":
    main()