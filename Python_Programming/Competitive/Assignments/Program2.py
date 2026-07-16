def ChkGreater(Val1,Val2):
    if Val1>Val2 :
        return True


def main():
    NO1 = int(input("Enter 1st Number:"))
    NO2 = int(input("Enter 2nd Number:"))

    Ret = ChkGreater(NO1,NO2)
    if(Ret == True):
        print("1st number is Grather")
    else:
        print("2nd number is Grather")

if __name__ =="__main__":
    main()