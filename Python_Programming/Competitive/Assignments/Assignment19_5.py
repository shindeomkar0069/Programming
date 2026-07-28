from functools import reduce
def ChkPrime(No):

    for i in range(2, No):
        if No % i == 0:
            return False

    return True
def Mult(No):
    return No*2

def Max(No1,No2):
    if No1>No2:
        return No1
    else:
        return No2
        

def main():
    Data=list(map(int,input("Enter tha Data:").split()))

    FData=list(filter(ChkPrime,Data))
    print("Data After Filter:",FData)

    MData=list(map(Mult,FData))
    print("Data After Map:",MData)

    RData=reduce(Max,MData)
    print("Data after Reduce:",RData)
    

if __name__=="__main__":
    main()