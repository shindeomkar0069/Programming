ChkOdd= lambda No : No%2!=0

def main():
    Data=list(map(int,input("Entar the Data:").split()))

    Ret = list(filter(ChkOdd, Data))

    print("Odd Numbers aer:",Ret)

if __name__=="__main__":
    main()