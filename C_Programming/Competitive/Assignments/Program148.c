#include <stdio.h>

void Display(char ch)
{
    char ch1;

    if (ch >= 'a' && ch <= 'z')
    {
        for (ch1 = ch; ch1 >= 'a'; ch1--)
        {
            printf("%c ", ch1);
        }
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        for (ch1 = ch; ch1 >= 'A'; ch1--)
        {
            printf("%c ", ch1);
        }
    }
}

int main()
{
    char cValue;

    printf("Enter the Character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}