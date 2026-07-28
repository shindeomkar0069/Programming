def Frequency(Data,Search):

    Count=0

    for i in Data:
        if i==Search:
            Count=Count+1

    return Count 

def main():
    Value=int(input("Enter the number of Elements:"))

    Data=list(map(int,input("Enter the Elements:").split()))

    Search=int(input("Element to Search:"))

    iRet=Frequency(Data,Search)

    print(F"Frequency of {Search} is :",iRet)


if __name__=="__main__":
    main()