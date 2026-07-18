
ChkLen=lambda str:len(str)>5

def main():

    Data=list(map(str,input("Enter the Data : ").split()))

    Ret=list(filter(ChkLen,Data))

    print("Strings with length greater than 5: ",Ret)

if __name__=="__main__":
    main()

    