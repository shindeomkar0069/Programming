#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("Number is Even\n");
        return TRUE;
    }

    printf("Number is Odd\n");
    return FALSE;
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    ChkEven(iValue);

    return 0;
}