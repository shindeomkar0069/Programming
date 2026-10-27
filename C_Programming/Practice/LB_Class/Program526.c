#include<stdio.h>

int Summetion(int iNo)
{
    static int iSum=0;
    
    if(iNo>0)
    {
        iSum=iSum+iNo;
        iNo--;
       Summetion(iNo);
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