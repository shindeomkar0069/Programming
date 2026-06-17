#include<stdio.h>

long int EvenFactorial(int iNo)
{
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    long int fac = 1;

    
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        
        if(iCnt % 2 == 0)
        {
            fac = fac * iCnt;
        }
    }

    return fac;
}

int main()
{
    int iValue = 0;
    long int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial is : %ld\n", iRet);

    return 0;
}