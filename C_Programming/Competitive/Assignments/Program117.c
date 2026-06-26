/*
Enter the number of rows: 4
Enter the number of columns: 4
A       B       C       D
a       b       c       d
A       B       C       D
a       b       c       d   */
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 0)   // Odd rows
        {
            for(j = 1, ch = 'a'; j <= iCol; j++, ch++)
            {
                printf("%c\t", ch);
            }
        }
        else             // Even rows
        {
            for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
            {
                printf("%c\t", ch);
            }
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &iValue1);

    printf("Enter the number of columns: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}