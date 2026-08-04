#include<iostream>
using namespace std;

template<class T>

T FirstOccurence(T * Arr,int Size,T iNo)
{
    int i=0;
    int iCount=0;
    for(i=0;i<Size;i++)
    {
        if(Arr[i]==iNo)
        {
           return i;
        }
    }
    

}
int main()
{
    int Arr[]={10,20,20,20,30,40,50};
    int iRet=FirstOccurence(Arr,7,40);

    char Crr[]={'M','M','M','N','B'};
    int cRet=FirstOccurence(Crr,5,'N');

    printf("%d\n",iRet);
    printf("%d\n",cRet);


    return 0;
}