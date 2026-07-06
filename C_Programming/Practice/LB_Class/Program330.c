#include<stdio.h>
typedef unsigned int UINT;
//position 4
int main()
{ 
    UINT iNo =0;
    UINT iMask = 0;
    

    printf("Enter the Number:\n");
    scanf("%d",&iNo);

    iMask= 0x00000008;

    iNo = iNo^iMask;
    printf("Updated Number :%d\n",iNo);
     
    return 0;
}
