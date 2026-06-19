#include<stdio.h>
void DisplayDigit(int iNO)
{
    int iDigit = 0;
    
    if(iDigit = 0 ,iDigit <iNO, iDigit++)
    {
         iNO = -iNO;
    }
    while(iNO>0 )
    {
        iDigit = iNO%10;
        printf("%d",iDigit);
        iNO = iNO/10;
    }

}


int main()
{
   int iValue = 0;

   printf("Enter Number :\n");
   scanf("%d",&iValue);

   DisplayDigit(iValue);
  

    return 0 ; 
}