def ChkDivisiable(Val1):
    if Val1%3==0 and Val1%5==0:
        return True
    return False

def main():
    NO1 = int(input("Enter 1st Number:"))
   

    Ret = ChkDivisiable(NO1)
    if(Ret == True):
        print("Number is divisiable by 3 and 5")
    else:
        print("Number is not divisiable by 3 and 5")

if __name__ =="__main__":
    main()