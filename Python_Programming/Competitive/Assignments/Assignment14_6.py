ChkOdd=lambda NO:(NO%2!=0)

def main():
    Value=int(input("Enter the Number:"))

    Ret=ChkOdd(Value)
    print(Ret)

if __name__=="__main__":
    main()