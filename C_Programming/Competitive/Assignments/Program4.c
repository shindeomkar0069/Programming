#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0 

BOOL Check (int iNO)
{
   if((iNO %5)==0)
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
    int iValue = 0;
    BOOL bret = FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bret = Check(iValue);
    
    if(bret == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisiable by 5\n");
    }
    return 0 ;
}
