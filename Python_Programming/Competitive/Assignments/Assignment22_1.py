from multiprocessing import Pool

def Square(Data):
    Sum=0

    for i in range(1,Data+1):
        Sum=Sum+(i*i)

    return Sum
def main():
    Data=list(map(int,input("Enter the Data:").split()))

    p=Pool()

    Result=p.map(Square,Data)
    p.close()
    p.join()

    print(Result)
if __name__=="__main__":
    main()