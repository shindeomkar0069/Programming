#include <stdio.h>

void Display(int iNo)
{
    static int  i=1;

    if(i<=iNo)
    {
        printf("%d ", i);
        i++;
        Display(iNo);
    }
    
}

int main()
{
    Display(5);

    return 0;
}