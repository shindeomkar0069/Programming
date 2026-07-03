#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0;

    for(int i = iStart; i <= iEnd; i++)
    {
        iMask = iMask | (1 << (i - 1));
    }

    return (iNo ^ iMask);
}

int main()
{
    UINT iNo;
    int iStart,iEnd;

    scanf("%u%d%d",&iNo,&iStart,&iEnd);

    printf("%u",ToggleBitRange(iNo,iStart,iEnd));

    return 0;
}