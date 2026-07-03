#include <stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iMask = iNo1 & iNo2;
    int iPos = 1;

    while(iMask != 0)
    {
        if((iMask & 1) == 1)
        {
            printf("%d ",iPos);
        }

        iMask = iMask >> 1;
        iPos++;
    }
}

int main()
{
    UINT iNo1,iNo2;

    scanf("%u%u",&iNo1,&iNo2);

    CommonBits(iNo1,iNo2);

    return 0;
}