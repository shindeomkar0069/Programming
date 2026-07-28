Multiplication=lambda No1,No2:No1*No2

def main():
    No1=int(input("Enter the First Number:"))
    No2=int(input("Enter the Second Number:"))

    iRet=Multiplication(No1,No2)
    print("Multiplicaton of given two Numbers are:",iRet)

if __name__=="__main__":
    main()