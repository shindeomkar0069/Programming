#include<stdio.h>
typedef unsigned int UINT;

int main()
{ 
    //pos 23
    UINT iNo =0;
    UINT iMask = 0xFFBFFFFFF;
    UINT iPos = 0;
    

    printf("Enter the Number:\n");
    scanf("%d",&iNo);

    iNo = iNo & iMask;
    printf("Updated Number :%d\n",iNo);
     
    return 0;
}
