#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iLength)
{
    int i = 0;
    int iProd = 1;
    int flag = 0;

    for(i = 0; i < iLength; i++)
    {
      if(Arr[i] % 2 != 0)
      {
        iProd = iProd * Arr[i];
        flag = 1;
       }
    }
    if(flag == 0)
    {
      return 0;
    }
    return iProd;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
       printf("Unable to allocate memory\n");
      return -1;
    }

    printf("Enter %d elements : ", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
     scanf("%d", &p[iCnt]);
    }

    iRet = Product(p, iSize);

    printf("Product is %d\n", iRet);

    free(p);
    return 0;
}