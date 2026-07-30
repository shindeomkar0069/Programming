from multiprocessing import Pool
import os

def Fact(No):
    print(f"Factors of {No} are: ")

    for i in range(1, No + 1):
        if No % i == 0:
            print(i,end=" ")
    print() 
    print(f"Process ID {os.getpid()}")
    print() 
    

def main():
    Data = list(map(int, input("Enter the Data: ").split()))

    p = Pool()

    result = p.map(Fact, Data)

    p.close()
    p.join()

if __name__ == "__main__":
    main()