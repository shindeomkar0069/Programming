#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, int iPos)
{
    UINT iMask = 0x00000001;

    iMask = iMask << (iPos - 1);

    return (iNo ^ iMask);
}

int main()
{
    UINT iNo;
    int iPos;

    scanf("%u%d", &iNo, &iPos);

    printf("%u", ToggleBit(iNo, iPos));

    return 0;
}