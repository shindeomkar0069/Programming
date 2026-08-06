#include <stdio.h>

int MaxDigit(int num)
{
    static int Max = 0;
    int digit = 0;

    if (num == 0)
    {
        return Max;
    }

    digit = num % 10;

    if (digit > Max)
    {
        Max = digit;
    }

    return MaxDigit(num / 10);
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the Number: ");
    scanf("%d", &iNo);

    iRet = MaxDigit(iNo);

    printf("Maximum Digit is: %d\n", iRet);

    return 0;
}