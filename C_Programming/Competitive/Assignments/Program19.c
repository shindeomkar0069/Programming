#include <stdio.h>

void sumFact(int no)
{

int Sum =0;

for(int iCnt =1; iCnt< no;iCnt++)
{
    if(no%iCnt !=0)
    {   
        Sum = Sum + iCnt; 
     
    }
    

}printf("%d ",Sum);


}

int main()
{
   int number;

   printf("Enter number\n");
   scanf("%d",&number);

   sumFact(number);

    return 0;
}