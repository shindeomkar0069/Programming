#include <stdio.h>

void Display(int iNo)
{

    if(iNo<0)
    {
        iNo = -iNo;
    }


    for(int iCnt =1; iCnt<=iNo; iCnt++)

    {
        printf("*");  
    }

     for(int iCnt =1; iCnt<=iNo; iCnt++)

    {
        
        printf("#");
    }
}

int main()
{

    int iValue;

    printf("Enter number\n");
    scanf("%d", &iValue);

    Display(iValue);


    return 0;
}