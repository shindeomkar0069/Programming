#include<stdio.h>

void Accepts(int iNo)
{
    int iCnt = 0;

    while(iNo > iCnt)
    {
        printf("*");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d",&iValue);

    Accepts(iValue);

    return 0;
}