/*
Enter the number of elements:15
2       4       6       8       10      12      14
*/
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
   

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt%2==0)
        {
            printf("%d\t",iCnt);
        }
        
        
    
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