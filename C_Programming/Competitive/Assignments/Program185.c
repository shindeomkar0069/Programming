#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0xF000000F;

    return (iNo ^ iMask);
}

int main()
{
    UINT iNo;

    scanf("%u", &iNo);

    printf("%u", ToggleBit(iNo));

    return 0;
}