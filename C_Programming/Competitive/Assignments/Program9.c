#include<stdio.h>
int Dispaly(int iNO, int Frequency)
{
    int iCnt= 0;
    for (iCnt=1; iCnt<=Frequency; iCnt++)

    printf("%d",iNO);
}


int main()
{
  int iValue=0;
  int iCount = 0;

  printf("Enter Number\n");
  scanf("%d",&iValue);

  printf("Enter Frequency\n");
  scanf("%d",&iCount);

Dispaly(iValue,iCount);

    return 0;
}