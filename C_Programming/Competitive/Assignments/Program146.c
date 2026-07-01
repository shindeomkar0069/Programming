#include <stdio.h>

void DisplayASCII()
{
    int i;

    printf("-------------------------------------------------\n");
    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    printf("-------------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        if(i >= 32 && i <= 126)
        {
            // Printable characters
            printf("%c\t%d\t%X\t\t%o\n", i, i, i, i);
        }
        else
        {
            // Non-printable characters
            printf(".\t%d\t%X\t\t%o\n", i, i, i, i);
        }
    }
}

int main()
{
    DisplayASCII();

    return 0;
}