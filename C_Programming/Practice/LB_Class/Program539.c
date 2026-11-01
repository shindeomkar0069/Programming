#include<stdio.h>

int Display(int Arr[],int iSize)
{
    static int i=0;
    
    while(i<iSize)
    {
        printf("%d\n",Arr[i]);
        i++;
    }
}
int main()
{   
    int Brr[]={10,20,30,40,50};\

    Display(Brr,5);

    return 0;
}