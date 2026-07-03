#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    if((iNo & iMask1) == iMask1 || (iNo & iMask2) == iMask2)
    {
        return 1;
    }

    return 0;
}

int main()
{
    UINT iNo;
    int iPos1,iPos2;

    scanf("%u%d%d",&iNo,&iPos1,&iPos2);

    if(ChkBit(iNo,iPos1,iPos2))
        printf("TRUE");
    else
        printf("FALSE");

    return 0;
}