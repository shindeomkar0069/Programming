#include <stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    char ch = '\0';

    while (*str != '\0')
    {
        ch = *str;

        if (ch >= 'A' && ch <= 'Z')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^\n]", Arr);

    iRet = CountCapital(Arr);

    printf("%d\n", iRet);

    return 0;
}