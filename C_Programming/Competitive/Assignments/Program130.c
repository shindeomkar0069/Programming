/*
Enter the Number Of Rows:4
Entar the number of Columns:4
1       2       3       4
1       *       *       4
1       *       *       4
1       2       3       4    */

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i =0;
    int j = 0;
//Filter
 if(iRow!=iCol)
 {
    printf("Invalid parameter:\n");
    printf("Enter value of Rows = value of Columns;\n");
    return;
 }

    for(i = 1;i<=iRow;i++)
      {
        for(j=1;j<=iCol;j++)
        {
            if(i==iCol||j==iRow||j==1||i==1)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("*\t");
            }
            
        }printf("\n");
      }
}
int main()
{  
    int iValue1=0 ,iValue2 = 0;
    

    printf("Enter the Number Of Rows:\n");
    scanf("%d",&iValue1);

    printf("Entar the number of Columns:\n");
    scanf("%d",&iValue2);

   Pattern(iValue1,iValue2);
    return 0;
}