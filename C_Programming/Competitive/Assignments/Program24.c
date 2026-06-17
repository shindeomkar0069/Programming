#include <stdio.h>

void Display(int iNo)
{

for(int iCnt = 1; iCnt <= iNo; iCnt++)
{
    if(iCnt %2 !=0)
    {

        printf("%d ", iCnt);
    }
}

}

int main()
{

    int iValue;
    printf("Enter number\n");
    scanf("%d", & iValue);

    Display(iValue);



    return 0;
}