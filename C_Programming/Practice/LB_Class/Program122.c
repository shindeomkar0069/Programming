#include<stdlib.h>
#include<stdio.h>

int Summetion(int Arr[],int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt= 0; iCnt<iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;

}
int main()
{
    int *Brr = NULL;
    int iLength = 0;
    int iCnt = 0, iRet=0;

    //Step 1 Accept the number of element 
    printf("Enter Number of Element\n");
    scanf("%d",&iLength);

    //Step 2 Allocate the Memoy
    Brr = (int*)malloc(iLength*sizeof(int));

    //Step 3 Acepts The value from user
    printf("Enter the elements\n");
    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    //Step 4 Use the Memory (LOGIC)
    iRet = Summetion(Brr,iLength);
    printf("Addition is :%d\n",iRet);


    //Step5 Deallocate the Memory 
    free(Brr);

    return 0;
}