#include <stdio.h>

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        if((iNo & 1) == 1)
        {
            iCnt++;
        }
        iNo = iNo >> 1;
    }

    return iCnt;
}

int main()
{
    UINT iNo;

    scanf("%u",&iNo);

    printf("%d",CountOne(iNo));

    return 0;
}