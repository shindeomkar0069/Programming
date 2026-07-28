from functools import reduce

def Even(No):
    if No%2==0:
        return No

def Square(No):
    return No*No

def Addition(No1,No2):
    return No1+No2

def main():
    Data=list(map(int,input("Enter the Data:").split()))

    FData=list(filter(Even,Data))
    print("List After Filter:",FData)

    MData=list(map(Square,FData))
    print("List After Map:",MData)

    RData=reduce(Addition,MData)
    print("Data After Reduce:",RData)

if __name__=="__main__":
    main()