#include<stdio.h>
typedef unsigned int  UINT;

int main()
{  
   UINT iNo = 0;
   UINT iMask =64;  //7th bit
   UINT iAns = 0;


   printf("Enter  number :\n");
   scanf("%d",&iNo);

   iAns= iNo & iMask;
   if (iAns == iMask)
   {
    printf("7th bit is on");
   }
   else
   {
    printf("7th bit is off");
   }

    return 0 ;
}
