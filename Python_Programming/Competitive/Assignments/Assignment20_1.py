import threading

def Even(No):
    for i in range(2,No,2):
        print(i,end=" ")
        

def Odd(No):
    for i in range(1,No,2):
        print(i,end=" ")
def main():

    t1=threading.Thread(target=Even,args=(20,))
    
    t2=threading.Thread(target=Odd,args=(20,))

    t1.start()
    t2.start()
    

if __name__=="__main__":
    main()