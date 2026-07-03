#include <stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    UINT iMask = 0x00000001;

    iMask = iMask << (iPos - 1);
    iMask = ~iMask;

    return (iNo & iMask);
}

int main()
{
    UINT iNo;
    int iPos;

    scanf("%u%d", &iNo, &iPos);

    printf("%u", OffBit(iNo, iPos));

    return 0;
}