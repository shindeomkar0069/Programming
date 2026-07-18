Mul=lambda No1,No2:No1*No2

def main():
    Value1=int(input("Enter First Number:"))
    Value2=int(input("Enter Second Number:"))

    Ret=Mul(Value1,Value2)

    print("Multiplication is:",Ret)

if __name__=="__main__":
    main()