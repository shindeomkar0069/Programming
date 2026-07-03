#include<stdio.h>
typedef int BOOL; 
typedef unsigned int  UINT;
#define TRUE  1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask =0x4000; //15th bit
    UINT iAns = 0;

     iAns= iNo & iMask;
   if (iAns == iMask)
   {
      return TRUE;
   }
   else
   {
    return FALSE;
   }
    


}
int main()
{  
   UINT iNo = 0;
    UINT iAns = 0;


   printf("Enter  number :\n");
   scanf("%d",&iNo);

   iAns= ChkBit(iNo);
   if (iAns == TRUE)
   {
    printf("15th bit is on");
   }
   else
   {
    printf("15th bit is off");
   }

    return 0 ;
}
