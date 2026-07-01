#include <stdio.h>

char Display(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        ch =ch-32;
    }
    else if (ch>='A'&&ch<='Z')
    {
        ch= ch+32;
    }
    
    
        
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character:\n");
    scanf("%c", &cValue);

    cValue = Display(cValue);

    printf("%c", cValue);

    return 0;
}