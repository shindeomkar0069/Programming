#include<iostream>
using namespace  std;
template<class T>
T Addition(T *Arr, int Size)
{
    T Sum=T();
    int i=0;

    for(i=0;i<Size;i++)
    {
        Sum=Sum+Arr[i];
    }
    return Sum;
}
int main()
{
    int Arr[]={10,20,30,40,50};
    float Brr[] = {10.0f,20.0f,30.0f,40.0f,50.0f};

    int iSum=Addition(Arr,5);
    float fSum=Addition(Brr,5);

    printf("%d\n",iSum);
    printf("%f\n",fSum);

    return 0;
}
