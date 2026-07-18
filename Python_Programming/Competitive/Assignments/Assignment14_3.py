CheckMax = lambda No1,No2:No1 if No1>No2 else No2
     
def main():
    Value1= int(input("Enter First Number:"))
    Value2= int(input("Enter Second Number:"))

    Ret = CheckMax(Value1,Value2) 
    print("'Maximum number is :",Ret)
 
    

if __name__ == "__main__":
    main()   