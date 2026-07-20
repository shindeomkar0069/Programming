#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
    T *Arr;
    int size;

    ArrayX(int No)
    {
        size = No;
        Arr=new T[size];
    }
    ~ArrayX()
    {
        delete []Arr;
    }

    void Accept()
    {
        int i=0;
        cout<<"Enter the element:\n";

        for(i=0;i<size;i++)
        {
            cin>>Arr[i];
        }
    }
    void Display()
    {
        int i=0;
        cout<<"element in the Array :\n";

        for(i=0;i<size;i++)
        {
            cout<<Arr[i]<<"\n";
        }
    }
    T Summetion()
    {
        int i=0;
        T sum=0;
        
        for(i=0;i<size;i++)
        {
            sum=sum+Arr[i];
        }
        return sum;
    }
    
    
};
int main()
{
    ArrayX <float>aobj(5);

    aobj.Accept();
    aobj.Display();
     
    cout<<"Summetion is : "<<aobj.Summetion()<<"\n";
    return 0;
}