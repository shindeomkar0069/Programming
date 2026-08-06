#include <stdio.h>

void Display(int iNo)
{

    static int  i = 5;

    if(i>=1)
    {
        printf("%d ", i);
        i--;
        Display(iNo);
    }
    
}

int main()
{
    Display(5);

    return 0;
}