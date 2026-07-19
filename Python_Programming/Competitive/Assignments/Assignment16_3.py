def Add(No1,No2):
    Sum= No1+No2
    return Sum
    

def main():
    Value1=int(input("Enter First Number: "))
    Value2=int(input("Enter Second Number :"))

    Ret=Add(Value1,Value2)

    print("Addition is :",Ret)

if __name__=="__main__":
    main()