//Error

#include<stdio.h>

int main()
{
    int *Brr = NULL;
    int iLength = 0;
    int iCnt = 0;

    //Step 1 Accept the number of element 
    printf("Enter Number of Element\n");
    scanf("%d",&iLength);

    //Step 2 Allocate the Memoy
    Brr = (int*)malloc(iLength*sizeof(int));

    //Step 3 Acepts The value from user
    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    //Step 4 Use the Memory (LOGIC)


    //Step5 Deallocate the Memory 
    free(Brr);

    return 0;
}