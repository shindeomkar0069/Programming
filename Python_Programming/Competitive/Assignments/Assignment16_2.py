def ChkEven(iNo):
    if (iNo%2==0):
        return True
    else:
        return False
    
def main():
    Value=int(input("Enter the Number: "))

    Ret=ChkEven(Value)

    if(Ret==True):
        print("Even Number")
    else:
        print("Odd Number")

if __name__=="__main__":
    main()