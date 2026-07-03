#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo, int iPos)
{
    UINT iMask = 0x00000001;

    iMask = iMask << (iPos - 1);

    if ((iNo & iMask) == iMask)
    {
        return 1;  
    }
    else
    {
        return 0;   
    }
}

int main()
{
    UINT iNo;
    int iPos;

    scanf("%u%d", &iNo, &iPos);

    if (ChkBit(iNo, iPos))
        printf("TRUE");
    else
        printf("FALSE");

    return 0;
}