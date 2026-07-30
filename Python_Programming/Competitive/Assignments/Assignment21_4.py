import threading

def Sum(Data):
    Sum=0

    for i in Data:
        Sum=Sum+i
    print(Sum)

def Product(Data):

    Product=1

    for i in Data:
        Product=Product*i

    print(Product)

def main():
    Data=list(map(int,input("Enter the Eements:").split()))

    t1=threading.Thread(target=Sum,args=(Data,))
    t2=threading.Thread(target=Product,args=(Data,))

    t1.start()
    t2.start()


    t1.join()
    t2.join()



if __name__=="__main__":
    main()