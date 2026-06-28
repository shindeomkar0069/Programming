#include<stdio.h>

void Dispaly(int Arr[], int iSize) 
{

    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
  

}
int main()
{

    int iLength =4;
    int Brr[iLength]; 
    int iCnt = 0;

    printf("Enter The Elements :");
    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }
    

    Dispaly(Brr,iLength);  
    return 0 ;
}
