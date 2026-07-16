def DisplayGrade():
    Marks=int(input("Enter the Marks:"))

    if(Marks>=75):
        print("Distinction")
    elif(Marks>=60 and Marks<=75):
        print("First Class")
    elif(Marks>=50 and Marks<=60):
        print("Second Class")
    else:
        print("Fail")

def main():
    DisplayGrade()

if __name__=="__main__":
    main()