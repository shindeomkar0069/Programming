#include <stdio.h>

void Table(int iNo)
{

    if(iNo<0)
    {
        iNo = -iNo;
    }

    printf("Your table is:\n");
    for(int iCnt =10; iCnt>=1; iCnt--)

    {
        int Ans = iNo*iCnt;


        printf("%d\n",Ans);
    }
}

int main()
{

    int iValue;

    printf("Enter number\n");
    scanf("%d", &iValue);

    Table(iValue);


    return 0;
}