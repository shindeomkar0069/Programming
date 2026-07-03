#include<stdio.h>
typedef int BOOL;
typedef unsigned int  UINT;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x20010;
    UINT iAns = 0;
    iAns = iNo & iMask;
    if(iAns==iMask)
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
    UINT Ans =0;
    UINT iNO=0;

    printf("Enter the Number:\n");
    scanf("%d",&iNO);
    
    Ans =ChkBit(iNO);
    if(Ans == TRUE)
    {
        printf("5th and 18th Bit is ON\n");
    }
    else
    {
        printf("5th and 18th Bit is OFF\n");
    }

    return 0 ;
}