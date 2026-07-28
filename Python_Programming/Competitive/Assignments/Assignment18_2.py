def Maximum(Data):

    max=Data[0]
    for no in Data:
        no>max
        max=no

    return max


def main():
    Size=int(input("Enter the Number of Elements:"))

    Data = list(map(int, input("Enter the elements: ").split()))

    iRet=Maximum(Data)

    print("Maximum Number is :",iRet)

if __name__=="__main__":
    main()