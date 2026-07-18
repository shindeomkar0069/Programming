CountEven= lambda No : No%2==0

def main():
    Data=list(map(int,input("Entar the Data:").split()))

    Ret = list(filter(CountEven, Data))

    print("Count Even Numbers aer:",len(Ret))

if __name__=="__main__":
    main()