#include<stdio.h>

int Summetion(int iNo)
{
    static int iSum=0;
    static int i=1;
    
    if(i<=iNo)
    {
        iSum=iSum+i;
        i++;
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