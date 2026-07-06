#include<stdio.h>
typedef unsigned int UINT;
int main()
{
    UINT iMask = 0x1;
    int iCnt = 1;

    printf("%X\n",iMask); //1
    iMask = iMask<<1;

    printf("%X\n",iMask); //2
    iMask = iMask<<1;

    printf("%X\n",iMask);  //4
    iMask = iMask<<1;

    printf("%X\n",iMask); //8
    iMask = iMask<<1;

    printf("%X\n",iMask); //10
    iMask = iMask<<1;

    printf("%X\n",iMask);  //20
    iMask = iMask<<1;

    printf("%X\n",iMask); //40
    iMask = iMask<<1;

    printf("%X\n",iMask); //80
    iMask = iMask<<1;



    return 0;
}