import threading

def Max(Data):
    print("Maximim Element is:",max(Data))


def Min(Data):
    print('Minimum Element is:',min(Data))

def main():
    Data=list(map(int,input("Enter the Elements:").split()))

    t1=threading.Thread(target=Max,args=(Data,))
    t2=threading.Thread(target=Min,args=(Data,))

    t1.start()
    t2.start()

    t1.join()
    t2.join()

    print("Exit From main")

if __name__=="__main__":
    main()