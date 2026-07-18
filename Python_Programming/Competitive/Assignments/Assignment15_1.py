Square =lambda No:No*No
    

def main():
    Data = list(map(int, input("Enter numbers: ").split()))

    print("Input Data is:", Data)

    MData = list(map(Square, Data))

    print("Squares are:", MData)

if __name__ == "__main__":
    main()