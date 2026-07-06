#include<stdio.h>
typedef unsigned int UINT;
//Position 28
int main()
{ 
    UINT iNo =0;
    UINT iMask = 0;
    

    printf("Enter the Number:\n");
    scanf("%d",&iNo);

    iMask= 0x08000000;

    iNo = iNo^iMask;
    printf("Updated Number :%d\n",iNo);
     
    return 0;
}
