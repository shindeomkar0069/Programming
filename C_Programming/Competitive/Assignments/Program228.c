#include <stdio.h>

int CountSmall(char *str)
{
    static int Count = 0;

    if (*str == '\0')
    {
        return Count;
    }

    if (*str >= 'a' && *str <= 'z')
    {
        Count++;
    }

    return CountSmall(str + 1);
}

int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter the string: ");
    fgets(Arr, sizeof(Arr), stdin);

    iRet = CountSmall(Arr);

    printf("Count of Small Letters is: %d\n", iRet);

    return 0;
}