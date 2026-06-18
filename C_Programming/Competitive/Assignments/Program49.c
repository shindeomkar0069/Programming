#include <stdio.h>
double FHtoCS(float fTemp)
{
  double dCS = 0.0;
  
  dCS =(fTemp-32)*5/9 ; //cTemp = (fTemp - 32) * 5 / 9;

  return dCS;
  

}
int main()
{
   float fValue = 0.0;
   double dValue = 0.0;
    
   printf("Enter temperature in FH\n");
   scanf("%f",&fValue);

   dValue = FHtoCS(fValue);
   printf("Temperature in CS: %f\n",dValue);

   return 0 ;
}