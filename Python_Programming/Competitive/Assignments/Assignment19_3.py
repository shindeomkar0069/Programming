from functools import reduce
def ChkData(No):
    return No >= 70

def Increase(No):
    return No+10

def Product(No1,No2):
    return No1*No2


def main():
    Data = list(map(int, input("Enter the Elements: ").split()))

    FData = list(filter(ChkData, Data))

    print("Numbers greater than or equal to 70:", FData)

    MData=list(map(Increase,FData))

    print("Data After Map:",MData)

    RData=reduce(Product,MData)

    print("Product of Element is :",RData)


if __name__ == "__main__":
    main()