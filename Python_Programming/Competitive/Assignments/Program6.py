def Table(NO1):
    for i in range(1, 11):
        print(f"{NO1 * i}")

def main():
    No = int(input("Entar the number:"))
    Ret=Table(No)

    print("Table is:",Ret)

if __name__=="__main__":
    main()