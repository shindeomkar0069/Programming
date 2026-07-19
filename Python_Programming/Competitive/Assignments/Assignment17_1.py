def Addition(No1,No2):
    Ans=No1+No2
    return Ans

def Substraction(No1,No2):
    Ans=No1-No2
    return Ans

def Multiplaction(No1,No2):
    Ans=No1*No2
    return Ans

def Division(No1,No2):
    Ans=No1/No2
    return Ans

def main():
    Value1=int(input("Enter the First Number:" ))
    Value2=int(input("Enter the First Number:" ))

    Add= Addition(Value1,Value2)
    print("Addition is :",Add)
    Sub=Substraction(Value1,Value2)
    print("Substraction is :",Sub)

    Mul=Multiplaction(Value1,Value2)
    print("Multiplaction is:",Mul)
    
    Div=Division(Value1,Value2)
    print("Division is:",Div)

if __name__=="__main__":
    main()