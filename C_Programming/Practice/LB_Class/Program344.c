#include<stdio.h>
typedef unsigned int UINT;

int main()
{   
    //position  = 9 & 17
    UINT iMask = 0x00010100;
    UINT iNo = 0;
    UINT iResult = 0;
    printf("Enter Number :\n");
    scanf("%d",&iNo);

    iResult = iNo^iMask;

    printf("Updated Number :%d\n",iResult);

    return 0;
}
