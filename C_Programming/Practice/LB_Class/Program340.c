#include<stdio.h>
typedef unsigned int UINT;

UINT OFFBit(UINT iNO,UINT iPos)
{
    
    UINT iMask = 0x1;
    UINT iReult = 0;

    if(iPos<1||iPos>32)
    {
        printf("Invalid Bit Position");
    }
    return iNO;
    iMask = iMask<<(iPos-1);
    iMask =~iMask;
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
