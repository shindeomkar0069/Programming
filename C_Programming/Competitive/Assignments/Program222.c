#include<stdio.h>
int Sum(int num)
{
    if (num == 0)
    {
        return 0;
    }

    return (num % 10) + Sum(num / 10);
}
int main()
{
    int iNo=0;
    int iRet=0;
    printf("Enter The Number:");
    scanf("%d",&iNo);
    iRet=Sum(iNo);

    printf("Addition of Digit is :%d\n",iRet);

    return 0;
}