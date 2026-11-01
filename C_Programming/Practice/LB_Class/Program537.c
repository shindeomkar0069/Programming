#include<stdio.h>

int Summetion(int iNo)
{
     int iDigit=0;
     static int iSum=1;
    
    if(iNo!=0)
    {
        iDigit=iNo%10;
        iSum=iSum*iDigit;
        Summetion(iNo/10); 
    }
    return iSum;
}
int main()
{   
    int iValue = 0;
    int iRet=0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet=Summetion(iValue);
    printf("Summetion is : %d\n",iRet);

    return 0;
}