#include <stdio.h>

void Display(char ch)
{
    if(ch <= 'F')
    {
        printf("%c ", ch);
        Display(ch + 1);
    }
}

int main()
{
    Display('A');

    return 0;
}