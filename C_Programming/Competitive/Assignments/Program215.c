#include <stdio.h>

void Display()
{
    static char i = 'a';

    if(i <= 'f')
    {
        printf("%c ", i);
        i++;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}