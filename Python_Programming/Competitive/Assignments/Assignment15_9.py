from functools import reduce

Product = lambda No1,No2 : No1*No2

def main():
    Data = list(map(int, input("Enter the numbers: ").split()))

    Result = reduce(Product, Data)

    print("Product of all element is:", Result)

if __name__ == "__main__":
    main()