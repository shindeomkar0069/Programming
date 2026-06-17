#include <stdio.h>

void Multiplication(int no)
{

int multiplication =1;

for(int iCnt =1;iCnt <=no/2;iCnt++)
{
    if(no%iCnt ==0)
    {   
        multiplication = multiplication * iCnt;

    }
    
}  
printf("%d",multiplication);


}

int main()
{
   int number;

   printf("Enter number\n");
   scanf("%d",&number);

   Multiplication(number);

    return 0;
}