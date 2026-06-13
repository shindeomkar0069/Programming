/*
  START
    Acept number as No
    If no is completely divisible by 2
        then orint even
    otherwise
        print Odd
  STOP
  
  START
       Acept number as No
       Divide No by 2
       If remainder is 0 
            then print Even
        otherwise
            print as Odd
*/

#include<stdio.h>
int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }


    return 0;
}