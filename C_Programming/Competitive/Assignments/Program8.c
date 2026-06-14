#include<stdio.h>
int Display(int iNo)

{
    int iCnt = 10;
    if(iNo< iCnt)
    {
        printf("hello\n");
    }
    else
    {
        printf("Demo\n");
    }
    return 0 ;
}


int main()
{
  int iValue = 0;

  printf("Enter a Number:\n");
  scanf("%d",&iValue);
  Display(iValue);
  return 0 ;


}
