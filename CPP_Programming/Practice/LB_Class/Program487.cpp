#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int *Arr;
    int size;

    ArrayX(int No)
    {
        size = No;
        Arr=new int[size];
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
    int Summetion()
    {
        int i=0;
        int sum=0;
        
        for(i=0;i<size;i++)
        {
            sum=sum+Arr[i];
        }
        return sum;
    }
    
    
};
int main()
{
    ArrayX aobj(5);

    aobj.Accept();
    aobj.Display();
     
    cout<<"Summetion is : "<<aobj.Summetion()<<"\n";
    return 0;
}