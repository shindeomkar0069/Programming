#include <stdio.h>

int SmallestDigit(int num)
{
    static int Min = 9;
    int digit = 0;

    if (num == 0)
    {
        return Min;
    }

    digit = num % 10;

    if (digit < Min)
    {
        Min = digit;
    }

    return SmallestDigit(num / 10);
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the Number: ");
    scanf("%d", &iNo);

    iRet = SmallestDigit(iNo);

    printf("Smallest Digit is: %d\n", iRet);

    return 0;
}