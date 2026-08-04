#include<iostream>
using namespace  std;

template<class T>
T Maximum(T No1,T No2,T No3)
{
    if(No1>No2 && No1>No3)
    {
        return No1;
    }
    else if (No2>No1 && No2>No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
}
int main()
{
    int iRet=Maximum(10,20,30);
    printf("%d\n",iRet);

    float fRet=Maximum(10.0f,20.0f,30.0f);
    printf("%f\n",fRet);
    
    return 0;
}
