#include <stdio.h>

void revFact(int no)
{

for(int iCnt =no/2;iCnt >=1;iCnt--)
{
    if(no%iCnt ==0)
    {   
    
    printf("%d ",iCnt);
     
    }
    
}


}

int main()
{
   int number;

   printf("Enter number\n");
   scanf("%d",&number);

   revFact(number);

    return 0;
}