#include<stdio.h>

void Acepts(int iNo)
{
    int iCnt = 0;
    while (iCnt<= iNo)
    {
        printf("*");
        iCnt++;
    }
}
int main()
{
   int iValue = 0;
   printf("Enter a number: \n");
   scanf("%d",&iValue);

    Acepts(iValue);

    return 0;
}