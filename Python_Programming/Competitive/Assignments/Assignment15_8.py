Div=lambda No:No%3==0 and No%5==0

def main():

    Data=list(map(int,input("Enter the Data : ").split()))

    Ret=list(filter(Div,Data))

    print("Number is Divisible by 3 & 5: ",Ret)

if __name__=="__main__":
    main()

    