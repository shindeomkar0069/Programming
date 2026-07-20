#include<iostream>
using namespace std;
template<class T>
class ArrayX
{
    public:
    T *Arr;
    int size;

    ArrayX(int No);
    ~ArrayX();
    void Accept();
    void Display();
    T Summetion();

};
template<class T>
ArrayX<T>::ArrayX(int No)
{
    size = No;
    Arr=new int[size];
}

template<class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
}

template<class T>
void ArrayX<T>::Accept()
{
    int i=0;
    cout<<"Enter the element:\n";

    for(i=0;i<size;i++)
    {
        cin>>Arr[i];
    }
}

template<class T>
void ArrayX<T>:: Display()
{
    int i=0;
    cout<<"element in the Array :\n";

    for(i=0;i<size;i++)
    {
        cout<<Arr[i]<<"\n";
    }
}
template<class T>
int ArrayX<T>:: Summetion()
{
    int i=0;
    T sum=0;

    for(i=0;i<size;i++)
    {
        sum=sum+Arr[i];
    }
    return sum;
}
int main()
{
    ArrayX<int> aobj(5);

    aobj.Accept();
    aobj.Display();
     
    cout<<"Summetion is : "<<aobj.Summetion()<<"\n";
    return 0;
}