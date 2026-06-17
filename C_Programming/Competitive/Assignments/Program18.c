#include <stdio.h>

void nonFact(int no)
{

for(int iCnt =1; iCnt< no;iCnt++)
{
    if(no%iCnt !=0)
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

   nonFact(number);

    return 0;
}