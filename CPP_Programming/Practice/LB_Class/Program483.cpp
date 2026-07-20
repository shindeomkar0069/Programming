#include<iostream>
using namespace std;
void Display(double Arr[],int size)
{
    int i=0;
    for(i=0;i<size;i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

double Summetion(double Arr[],int size)
{
    int i=0;
    double sum=0.0;
    for (i=0;i<size;i++)
    {
        sum=sum+Arr[i];
    }
    return sum;
}

int main()
{
    double Brr[]={10.2,20.2,30.2,40.2,50.2};
    int sum=0;
    Display(Brr,5);
    sum=Summetion(Brr,5);
    cout<<"Summetion is : "<<sum;

    return 0;
}