from functools import reduce
Minimum=lambda No1,No2:No1 if No1<No2 else No2

def main():

    Data=list(map(int,input("Enter the Data : ").split()))

    Ret=reduce(Minimum,Data)

    print("Minimum number from Data is: ",Ret)

if __name__=="__main__":
    main()

    