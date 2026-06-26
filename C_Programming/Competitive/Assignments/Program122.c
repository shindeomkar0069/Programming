/*
Enter the number of rows: 4
Enter the number of columns: 4
1       3       5       7
2       4       6       8
1       3       5       7
2       4       6       8  */
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%d\t", (2*j)-1);  
            }
            else
            {
                printf("%d\t", 2*j);      
            }
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows: ");
    scanf("%d",&iValue1);

    printf("Enter the number of columns: ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}