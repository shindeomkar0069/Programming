#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iCount = 0;
   

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       if(Arr[iCnt] == iNo)
       {
        iCount++;
       }
    }

    if(iCount==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iValue = 0;
    bool bRet = false;


    printf("Enter the no of elements:\n");
    scanf("%d", &iLength);

    Brr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements:\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }
    printf("Enter the that you want to search:\n");
    scanf("%d",&iValue);

    bRet = LinearSearch(Brr, iLength ,iValue);
    if(bRet == true)
    {
        printf("element is present \n");

    }
    else
    {
        printf("element is not present\n");
    }

    free(Brr);

    return 0;
}