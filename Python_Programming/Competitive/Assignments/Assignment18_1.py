def Addition(Data):
    Sum = 0

    for No in Data:
        Sum = Sum + No

    return Sum


def main():
    Size = int(input("Enter number of elements: "))

    Data = list(map(int, input("Enter the elements: ").split()))

    Result = Addition(Data)

    print("Addition of all elements is:", Result)


if __name__ == "__main__":
    main()