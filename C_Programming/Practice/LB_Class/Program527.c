#include<stdio.h>

int Factorial(int iNo)
{
    int iMult=1;
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
    int iRet=0;

    printf("Enter Frequency: ");
    scanf("%d", &iValue);

    iRet=Factorial(iValue);

    printf("Factorial is:%d\n",iRet);
    

    return 0;
}