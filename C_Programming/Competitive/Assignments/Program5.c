#include<stdio.h>

void Acepts(int iNo)
{
    int iCnt = 0;
    for (iCnt =1; iCnt<= iNo; iCnt++)
    {
        printf("*");
    }
}
int main()
{
   int iValue = 0;
    iValue = 5;

    Acepts(iValue);

    return 0;
}