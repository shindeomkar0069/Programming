#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x08104040;
    UINT iAns = 0;

    iAns = iMask & iNo;

    if(iAns == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT Ans = 0;
    UINT iNO =0;

    printf("Enter the Number:\n");
    scanf("%d",&iNO);

    Ans= ChkBit(iNO);
    if(Ans==TRUE)
    {
        printf("7th,15th,21th and 28th bit is ON\n");
    }
    else
    {
        printf("7th,15th,21th and 28th bit is OFF\n");
    }

    return 0 ;
}