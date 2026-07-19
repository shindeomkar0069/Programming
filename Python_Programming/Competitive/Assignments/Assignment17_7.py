def Patter(No):
    for i in range(1,No+1):
        for j in range(1,No+1):
            print(j ,end=" ")
        print()
        

def main():
    No=int(input("Enter the Number: "))

    Patter(No)

if __name__=="__main__":
    main()