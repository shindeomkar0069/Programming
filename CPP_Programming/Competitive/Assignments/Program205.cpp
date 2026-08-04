#include<iostream>
using namespace std;
template<class T>

T Minimum(T *Arr, int Size)
{
    T Min = Arr[0];

    for(int i = 1; i < Size; i++)
    {
        if(Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }

    return Min;
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};
    int iRet = Minimum(Arr, 5);

    float Brr[] = {10.0f, 20.0f, 30.0f, 40.0f, 50.0f};
    float fRet = Minimum(Brr, 5);

   printf("%d\n",iRet);
    printf("%f\n",fRet);

    return 0;
}