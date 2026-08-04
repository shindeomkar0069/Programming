#include<iostream>
using namespace std;

template<class T>

T Frequency(T * Arr,int Size,T iNo)
{
    int i=0;
    int iCount=0;
    for(i=0;i<Size;i++)
    {
        if(Arr[i]==iNo)
        {
            iCount++;
        }
    }
    return iCount;

}
int main()
{
    int Arr[]={10,20,20,20,30,40,50};
    int iRet=Frequency(Arr,7,20);

    char Crr[]={'M','M','M','N','B'};
    int cRet=Frequency(Crr,5,'M');

    printf("%d\n",iRet);
    printf("%d\n",cRet);


    return 0;
}