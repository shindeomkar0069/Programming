#include <stdio.h>

void Pattern(int num)
{
    if (num == 0)
    {
        return;
    }

    Pattern(num - 1);
    printf("%d ", num);
}

int main()
{
    Pattern(5);

    return 0;
}