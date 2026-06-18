#include<stdio.h>
void RangedisplayEven(int iStart , int iEnd)
{
    int iCnt = 0;
    int iValue = 0;
     

    for(iCnt=iStart ; iCnt<=iEnd ; iCnt++)
    {
        if (iCnt % 2 ==0)
        {
        printf("%d\n",iCnt );
        }
    }

}


int main()
{
   int iValue1 = 0;
   int iValue2 = 0;
   

   printf("Enter Starting Number :\n");
   scanf("%d",&iValue1);

   printf("Entar the last Number :\n");
   scanf("%d",&iValue2);
   
   RangedisplayEven(iValue1,iValue2);



    return 0; 
}