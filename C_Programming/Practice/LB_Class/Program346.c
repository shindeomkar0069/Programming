#include<stdio.h>
typedef unsigned int UINT;

int main()
{   
    //position  = 21 & 27
    UINT iMask = 0x04100000;
    UINT iNo = 0;
    UINT iResult = 0;
    printf("Enter Number :\n");
    scanf("%d",&iNo);

    iResult = iNo^iMask;

    printf("Updated Number :%d\n",iResult);

    return 0;
}
