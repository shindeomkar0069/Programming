#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int i = 0;
    int iNo = 0;
    int iCount = 0;

    printf("Numbers having 3 digits are:\n");

    for(i = 0; i < iLength; i++)
    {
        iNo = Arr[i];

        if(iNo < 0)
        {
            iNo = -iNo;     // Handle negative numbers
        }

        iCount = 0;

        while(iNo != 0)
        {
            iCount++;
            iNo = iNo / 10;
        }

        if(iCount == 3)
        {
            printf("%d\t", Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    Digits(p, iSize);

    free(p);

    return 0;
}