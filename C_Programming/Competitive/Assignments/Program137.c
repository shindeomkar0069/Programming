/*
Enter the No Of Rows:
4
Enter the No Of Columns:
4
*       *       *       #
*       *       #       @
*       #       @       @
#       @       @       @   */

#include<stdio.h>
void Pattern(int iRow ,int iCol)
{
    int i = 0;
    int j =0;

    //filter
    if(iRow!=iCol)
    {
        printf("Invalid Parameer\n");
        printf("Enter the same No of Rows And Column:\n");
        return;
    }
       for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i + j == iCol + 1)
            {
                printf("#\t");
            }
            else if (i+j<iCol+1)
            {
                printf("*\t");
            }
            else
            {
                printf("@\t");
            }
        }printf("\n");
      }
    
}
int main()
{
    int iValue1 = 0,iVlaue2=0;

    printf("Enter the No Of Rows:\n");
    scanf("%d",&iValue1);

    printf("Enter the No Of Columns:\n");
    scanf("%d",&iVlaue2);

    Pattern(iValue1,iVlaue2);

    return 0 ;
}