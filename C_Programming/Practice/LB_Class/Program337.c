#include<stdio.h>
typedef unsigned int UINT;

int main()
{ 
    //pos 4
    UINT iNo =0;
    UINT iMask = 0xFFFFFFF7;
    UINT iPos = 0;
    

    printf("Enter the Number:\n");
    scanf("%d",&iNo);

    iNo = iNo & iMask;
    printf("Updated Number :%d\n",iNo);
     
    return 0;
}
