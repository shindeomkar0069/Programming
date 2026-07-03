#include<stdio.h>
typedef unsigned int UINT;
UINT Bitoff(UINT iNo)
{
    UINT iMask = 0; 

    iMask = 0x00000040;   
    iNo = iNo &(~iMask);
    return iNo;
}

int main()
{
    UINT iNo = 0;
    UINT Ans =0;
    
    printf("Enter the Number: ");
    scanf("%u", &iNo);

    Ans =Bitoff(iNo);

    printf("Updated Number: %u\n", Ans);

   
    return 0;
}
