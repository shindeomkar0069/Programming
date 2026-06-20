/*
Enter the number of elements:
4
a       b       c       d
*/
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'a'; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t", ch);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements:\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}