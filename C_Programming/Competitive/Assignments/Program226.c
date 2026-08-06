#include <stdio.h>

int WhiteSpaceCount(char *str)
{
    static int Count = 0;

    if (*str == '\0')
    {
        return Count;
    }

    if (*str == ' ')
    {
        Count++;
    }

    return WhiteSpaceCount(str + 1);
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string:\n");
    fgets(Arr, sizeof(Arr), stdin);

    iRet = WhiteSpaceCount(Arr);

    printf("Count of White Spaces is: %d\n", iRet);

    return 0;
}