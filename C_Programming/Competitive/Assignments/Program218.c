#include<stdio.h>
void Display(int iNo)
{
    if(iNo >= 1)
    {
        printf("%d ",iNo);
        Display(iNo-1);
    }
}
int main()
{
    int num=5;

    Display(num);
    return 0;
}