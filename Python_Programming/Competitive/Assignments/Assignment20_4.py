import threading
import os

def Small(Data):
    Count=0
    for ch in Data:
        if ch.islower():
            Count=Count+1
    
    print("Name of thread is:",threading.current_thread().name)
    print("Thread ID is:",threading.get_ident())
    print("Count of Smaller Letters:",Count)
    print()

def Capital(Data):
    Count=0
    for ch in Data:
        if ch.isupper():
            Count=Count+1
    print("Name of thread is:",threading.current_thread().name)
    print("Thread ID is:",threading.get_ident())
    print("Count of Capital Letters:",Count)
    print()
    

def Digit(Data):
    Count=0
    for ch in Data:
        if ch.isdigit():
            Count=Count+1
    print("Name of thread is:",threading.current_thread().name)
    print("Thread ID is:",threading.get_ident())
    print("Count of Digit:",Count)
    print()
    

def main():
    Data = input("Enter the String: ")

    t1=threading.Thread(target=Small,args=(Data,))
    t2=threading.Thread(target=Capital,args=(Data,))
    t3=threading.Thread(target=Digit,args=(Data,))

    
    

    t1.start()
    t2.start()
    t3.start()

    t1.join()
    t2.join()
    t3.join()
            

if __name__=="__main__":
    main()