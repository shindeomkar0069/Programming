#include<stdio.h>
int Mult(int num)
{
    if (num == 0)
    {
        return 1;
    }

    return (num % 10) * Mult(num / 10);
}
int main()
{
    int iNo=0;
    int iRet=0;
    printf("Enter The Number:");
    scanf("%d",&iNo);
    iRet=Mult(iNo);

    printf("Product of Digit is :%d\n",iRet);

    return 0;
}