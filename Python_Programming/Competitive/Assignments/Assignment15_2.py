ChkEven= lambda No : No%2==0

def main():
    Data=list(map(int,input("Entar the Data:").split()))

    Ret = list(filter(ChkEven, Data))

    print("Even Numbers aer:",Ret)

if __name__=="__main__":
    main()