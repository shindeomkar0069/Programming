#include<stdio.h>
void Dispaly(int *iPtr)
{
  printf("Value of iPtr: %d\n ",iPtr);
}
int main()
{
    int Arr[5]={10,20,30,40,50};

    printf("Basr Address of Arr %d\n",Arr);
    
    Dispaly(Arr);
    return 0 ;
}