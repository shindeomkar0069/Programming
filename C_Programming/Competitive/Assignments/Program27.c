// find factorial

#include <stdio.h>

long int Factorial(int iNo)
{

    if(iNo<0)
    {
        return -1;
    }

     long int fac =1;

    for(int iCnt =1; iCnt <=iNo; iCnt++)
    {
     fac = fac * iCnt;
    }

    return fac;

    
}

int main()
{
    int iValue=0;
    long int iRet =0;

    printf("Enter number\n");
    scanf("%d", &iValue);


    iRet = Factorial(iValue);

    if(iRet==-1)
    {
        printf("Enter valid number");
    }

    else{

    printf("Factorial of %d is : %ld\n",iValue,iRet);
    }

    return 0;
}