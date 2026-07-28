import threading

def EvenList(Data):
    Sum=0
    Even=[]
    for no in Data:
        if no%2==0:
            Even.append(no)
            Sum=Sum+no
    print("Even Element are:",Even)
    print("Sum of Even Element are:",Sum)


def OddList(Data):
    Sum=0
    Odd=[]
    for no in Data:
         if no%2!=0:
            Odd.append(no)
            Sum=Sum+no
    print("Odd Element are:",Odd)
    print("Sum of Odd Element are:",Sum)


def main():
    Data=list(map(int, input("Enter the List:").split()))

    t1=threading.Thread(target=EvenList,args=(Data,))
    t2=threading.Thread(target=OddList,args=(Data,))

    t1.start()
    t2.start()

    t1.join()
    t2.join()
if __name__=="__main__":
    main()