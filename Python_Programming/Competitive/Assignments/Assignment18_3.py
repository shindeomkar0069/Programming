def Minimum(Data):
    min=Data[0]

    for no in Data:
        if no<min :
            min=no

    return min


def main():
    Size=int(input("Enter the Number of elements:"))

    Data=list(map(int,input("Enter the Elements:").split()))

    iRet=Minimum(Data)

    print("Minimum elements are:",iRet)

if __name__=="__main__":
    main()