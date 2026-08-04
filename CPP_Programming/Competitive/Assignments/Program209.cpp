#include<iostream>
using namespace std;

template<class T>

T LastOccurence(T * Arr,int Size,T iNo)
{
    int i=0;
    int iCount=0;
    for(i=Size;i>0;i--)
    {
        if(Arr[i]==iNo)
        {
           return i;
        }
    }
    

}
int main()
{
    int Arr[]={10,20,20,20,30,40,50,40};
    int iRet=LastOccurence(Arr,8,40);

    char Crr[]={'M','M','M','N','B','N'};
    int cRet=LastOccurence(Crr,6,'N');

    printf("%d\n",iRet);
    printf("%d\n",cRet);


    return 0;
}