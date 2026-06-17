#include <stdio.h>

void Display(int iNo)
{

for(int iCnt = 1; iCnt <= 5; iCnt++)
{
  printf("%d\n", iNo*iCnt);
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