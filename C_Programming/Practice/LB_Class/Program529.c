#include<stdio.h>

typedef unsigned long int ULONG; 
ULONG Factorial(int iNo)
{
    ULONG iMult=1;
    int i=0;
    i=1;
    while (i<=iNo)
    {
        iMult=iMult*i;
        i++;
    }
   return iMult;
}

int main()
{
    int iValue = 0;
    ULONG iRet=0;

    printf("Enter Frequency: ");
    scanf("%d", &iValue);

    iRet=Factorial(iValue);

    printf("Factorial is:%lu\n",iRet);
    

    return 0;
}