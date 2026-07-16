def SumNatural(NO1):
    Ans =0
    for i in range(1, NO1+1):
        Ans = Ans+i
    return Ans
        

def main():
    No = int(input("Entar the number:"))
    Ret=SumNatural(No)

    print("Sum of Natural number is:",Ret)

if __name__=="__main__":
    main()