#include <stdio.h>
int CountTwo(int iNo)
{
    int iCount=0;
    
    while(iNo!=0)
    {

        if(iNo%10==2)
        {
          iCount++;
        }
         iNo = iNo/10;
    }
        return iCount;
}



int main()
{ 
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    printf("Frequency of 2 is :%d\n",iRet);

    return 0;

}