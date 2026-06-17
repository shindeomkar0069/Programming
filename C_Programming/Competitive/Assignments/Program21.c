#include <stdio.h>

void Pattern(int iNo)
{
   iNo = -iNo;
   for(int iCnt=1; iCnt<=iNo; iCnt++)
     {

    printf(" $ *");
     }

}

int main()
{

int iValue;

printf("Enter number\n");
scanf("%d", &iValue);

Pattern(iValue);

    return 0;
}