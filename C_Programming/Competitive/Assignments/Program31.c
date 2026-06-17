#include <stdio.h>

void Display(double iNo)
{

     double INR =0;
     INR = iNo *70;

     printf("The value of %lf dollar is :%lf rupees", iNo, INR);
}

int main()
{

    double iValue;

    printf("Enter dollar amount\n");
    scanf("%lf", &iValue);

    Display(iValue);


    return 0;
}