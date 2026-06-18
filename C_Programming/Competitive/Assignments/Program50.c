#include <stdio.h>

double SqureMeter (float fNO)
{
  float fMeter = 0.0;
  
  fMeter = fNO * 0.0929;
  return fMeter;
  

}
int main()
{
   float fValue = 0;
   float fRet = 0;
    
   printf("Enter Distance in KM\n");
   scanf("%f",&fValue);

   fRet = SqureMeter(fValue);
   printf("Distance in meter is: %lf\n",fRet);

   return 0 ;
}