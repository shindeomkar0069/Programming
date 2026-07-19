def Divsiable(iNo):
    if(iNo%5==0):
        return True
    else:
        return False
        

def main():
    No=int(input("Enter the Number : "))

    Ret=Divsiable(No)

    print(Ret)

if __name__=="__main__":
    main()