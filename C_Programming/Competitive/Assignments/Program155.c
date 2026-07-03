#include <stdio.h>
#include <string.h>

void Reverse(char *str)
{
    int i = 0;
    int j = strlen(str) - 1;
    char temp;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the String: ");
    scanf("%[^\n]s", Arr);

    Reverse(Arr);

    printf("Reversed String: %s\n", Arr);

    return 0;
}