#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
    int iCount = 0;
    int iCnt = 0;
  
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
   int iSize = 0,iCnt = 0, iRet = 0;
   int*p = NULL;

   printf("Enter the number of element:\n");
   scanf("%d",&iSize);

   p = (int*)malloc(iSize*sizeof(int));

   if(p== NULL)
   {
    printf("unable to allocate memory\n");
    return -1;
   }
   printf("Enter %d the elment:\n",iSize);

   for(iCnt=0;iCnt<iSize;iCnt++)
   {
    printf("Enter the element:%d\n",iCnt+1);
    scanf("%d",&p[iCnt]);
   }

   iRet=CountEven(p,iSize);
   printf("Result is:%d",iRet);

   free(p);

    return 0; 
}