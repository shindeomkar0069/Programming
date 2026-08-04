#include<iostream>
using namespace std;

template <class T>
T Multiplay(T No1, T No2)
{
    T Ans;
    Ans=No1*No2;
    return Ans;

}
int main()
{
    int iRet = 0;
    iRet = Multiplay(10,20);
    printf("%d\n",iRet);

    float fRet=Multiplay(10.0f,20.0f);
    printf("%f\n",fRet);
    return 0;
}