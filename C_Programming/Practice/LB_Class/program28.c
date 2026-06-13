#include<stdio.h>
void Display( int ino)
{


  int  iCnt = 0;
for(iCnt=1; iCnt<=ino; iCnt++)
 {
  printf("Jay Ganesh...\n");
 }
}



int main()
{
 
 int iValue = 0;

 printf("Enter the Frequency\n");
 scanf("%d",&iValue);

 Display(iValue);
 
return 0 ;
}