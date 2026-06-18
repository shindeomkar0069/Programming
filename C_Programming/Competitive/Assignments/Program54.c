#include<stdio.h>
int RangedisplayEven(int iStart , int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
     

    for(iCnt=iStart ; iCnt<=iEnd ; iCnt++)
    {
        if (iCnt % 2 ==0)
        {
          
          iSum = iSum + iCnt;
          
        }
    } 
    return iSum;

}  


int main()
{
   int iValue1 = 0;
   int iValue2 = 0;
    int iRet = 0;
   

   printf("Enter Starting Number :\n");
   scanf("%d",&iValue1);

   printf("Entar the last Number :\n");
   scanf("%d",&iValue2);
   
   iRet = RangedisplayEven(iValue1,iValue2);
   
   printf ("%d",iRet);


    return 0; 
}