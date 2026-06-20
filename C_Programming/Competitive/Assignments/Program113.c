/*
Enter the number of rows:4
Enter the number of columns:4
4       3       2       1
4       3       2       1
4       3       2       1
4       3       2       1  */
#include<stdio.h>

 void Pattern(int iRow,int iCol)
{
    int i= 0;
    int j = 0;

    for(i =iRow;i>=1;i--)
    {
        for(j=iCol;j>=1;j--)
        {
            printf("%d\t",j);
        }printf("\n");
    }
}
int main()
{
    int iValue1 =0,iValue2=0;
    printf("Enter the number of rows:");
    scanf("%d",&iValue1);  

    printf("Enter the number of columns:");
    scanf("%d",&iValue2);


    Pattern(iValue1,iValue2);

    return 0 ;
}