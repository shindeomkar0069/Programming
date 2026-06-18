#include <stdio.h>

int KMtoMeter(int iNO)
{
  int iMeter = 0;
  
  iMeter = iNO * 1000;
  return iMeter;
  

}
int main()
{
   int iValue = 0;
   int iRet = 0;
    
   printf("Enter Distance in KM\n");
   scanf("%d",&iValue);

   iRet = KMtoMeter(iValue);
   printf("Distance in meter is: %d\n",iRet);

   return 0 ;
}