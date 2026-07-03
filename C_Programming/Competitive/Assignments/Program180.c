#include<stdio.h>
typedef unsigned int UINT;
UINT OffBit(UINT iNo)
{
   UINT iMask = 0x0000000F;
    iNo = iNo |(iMask);
    return iNo;
}

int main()
{
    UINT iNO=0;
    UINT Ans=0;

    printf("Enter the number:\n");
    scanf("%u",&iNO);

    Ans=OffBit(iNO);
    printf("Updated Bit is :%u\n",Ans);
    
    return 0;
}
