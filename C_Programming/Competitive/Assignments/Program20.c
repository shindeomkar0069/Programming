#include <stdio.h>

void Diff(int no)
{

    int FactSum =0;
    int NonFactSum =0;

     for(int iCnt =1; iCnt<no; iCnt++)
     {
        if(no%iCnt==0)
        {
         FactSum = FactSum + iCnt;
        }

        else
        {
         NonFactSum = NonFactSum + iCnt;
        }

     }

     int Ans =0;

     Ans = NonFactSum-FactSum;

     printf("%d", Ans);



}

int main()
{

 int number;

 printf("Enter number");
 scanf("%d", &number);

 Diff(number);



    return 0; 
}