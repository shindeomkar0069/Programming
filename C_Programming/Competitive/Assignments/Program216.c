#include <stdio.h>

void Display(int iNo)
{
    if(iNo >= 1)
    {
        printf("*", iNo);
        Display(iNo-1);
    }
}

int main()
{
    int iNo;

    printf("Enter the Number: ");
    scanf("%d", &iNo);

    Display(iNo);

    return 0;
}