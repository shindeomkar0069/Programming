#include<stdio.h>

int Summetion(int Arr[], int iSize) 
{
    int iSum =0;
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       
       iSum= iSum+ Arr[iCnt];

      
    }
   return iSum;

}
int main()
{

    int iLength =4;
    int Brr[iLength]; 
    int iCnt = 0;
    printf("Enter a array length\n");
    scanf("%d",&iLength);

    int iRet=0;
    

    printf("Enter The Elements :");
    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }
    

    iRet =(Brr,iLength);  
    printf("Addition of all element :%d\n",iRet);
    return 0 ;
}
