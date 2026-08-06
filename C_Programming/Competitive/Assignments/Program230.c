#include <stdio.h>

int Reverse(int num)
{
    static int Rev = 0;

    if (num == 0)
    {
        return Rev;
    }

    Rev = (Rev * 10) + (num % 10);

    return Reverse(num / 10);
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the Number: ");
    scanf("%d", &iNo);

    iRet = Reverse(iNo);

    printf("Reverse Number is: %d\n", iRet);

    return 0;
}