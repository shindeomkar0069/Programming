#include <stdio.h>

int Factorial(int No)
{
    if (No == 0 || No == 1)   
    {
        return 1;
    }

    return No * Factorial(No - 1);   
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iNo);

    iRet = Factorial(iNo);

    printf("Factorial is: %d\n", iRet);

    return 0;
}