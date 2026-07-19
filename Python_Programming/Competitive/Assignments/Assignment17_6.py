def Patter(No):
    for i in range(No, 0, -1):
        for j in range(i):
            print(" * ", end=" ")
        print()
        

def main():
    No=int(input("Enter the Number: "))

    Patter(No)

if __name__=="__main__":
    main()