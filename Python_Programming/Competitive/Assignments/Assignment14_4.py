CheckMax = lambda No1,No2:No2 if No1>No2 else No1
     
def main():
    Value1= int(input("Enter First Number:"))
    Value2= int(input("Enter Second Number:"))

    Ret = CheckMax(Value1,Value2) 
    print("Minimum number is :",Ret)
 
    

if __name__ == "__main__":
    main()   