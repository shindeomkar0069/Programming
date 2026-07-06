#include<stdio.h>
typedef unsigned int UINT;

UINT OFFBit(UINT iNO,UINT iPos)
{
    //Position 4 is off IF it is ON
    UINT iMask = 0xFFFFFFF7;
    UINT iReult = 0;

    if(iPos<1||iPos>32)
    {
        printf("Invalid Bit Position");
    }
    return iNO;

    iReult= iNO & iMask;

    return iReult;
   
}

int main()
{ 
    UINT iValue = 0, iRet = 0,iLocation = 0;
    
    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    printf("Enter the Bit Position\n");
    scanf("%d",&iLocation);

    iRet = OFFBit(iValue,iLocation);
     
    printf("Udated Number is :%d\n",iRet);
    return 0;
}
