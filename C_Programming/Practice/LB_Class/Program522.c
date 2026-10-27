#include<stdio.h>

int Summetion(int iNo)
{
    int iSum=0;
    int i=0;
    i=1;
    while (i<=iNo)
    {
        iSum=iSum+i;
        i++;
    }
   return iSum;
}

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter Frequency: ");
    scanf("%d", &iValue);

    iRet=Summetion(iValue);

    printf("Summetion is:%d\n",iRet);
    

    return 0;
}