#include<stdio.h>
typedef unsigned int UINT;

int main()
{ 
    UINT iMask = 0xFFFFFFBF;
    printf("Before %x\n",iMask);
    iMask = ~iMask;
     printf("After %x\n",iMask);
     
    return 0;
}
