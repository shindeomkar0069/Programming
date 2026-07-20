#include<iostream>
using namespace std;
template<class T>
void Display(T Arr[],int size)
{
    int i=0;
    for(i=0;i<size;i++)
    {
        cout<<Arr[i]<<"\n";
    }
}
template<class T>
T Summetion(T Arr[],int size)
{
    int i=0;
    T sum=0;
    for (i=0;i<size;i++)
    {
        sum=sum+Arr[i];
    }
    return sum;
}

int main()
{
    int sum=0;
    double Brr[]={10.2,20.2,30.2,40.2,50.2};
    int Crr[]={10,20,30,40,50};

    Display(Brr,5);
    Display(Crr,5);

    sum=Summetion(Brr,5);
    cout<<"Summetion is : "<<sum<<"\n";

    sum=Summetion(Crr,5);
    cout<<"Summetion is : "<<sum;

    return 0;
}