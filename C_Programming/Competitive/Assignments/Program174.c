#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x1C0;
    UINT iAns =0;

    iAns = iMask & iNo;
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
    UINT Ans = 0;
    UINT NO = 0;

    printf("Enter the Number;\n");
    scanf("%d",&NO);

    Ans = ChkBit(NO);
    if( Ans == TRUE)
    {
        printf("7th,8th,9th bit is ON\n");
    }
    else
    {
        printf("7th, 8th ,9th Bit is OFF\n");
    }
    return 0 ;
}