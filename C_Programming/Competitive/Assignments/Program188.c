#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x00000900;

    if((iNo & iMask) != 0)
    {
        return 1;
    }

    return 0;
}

int main()
{
    UINT iNo;

    scanf("%u",&iNo);

    if(ChkBit(iNo))
        printf("TRUE");
    else
        printf("FALSE");

    return 0;
}