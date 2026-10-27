#include<stdio.h>

typedef unsigned long int ULONG; 
ULONG Factorial(int iNo)
{
    static ULONG  iMult=1;
    static int i=1;
    
    if (i<=iNo)
    {
        iMult=iMult*i;
        i++;
        Factorial(iNo);
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