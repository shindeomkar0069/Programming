#include<stdio.h>
void Dispaly(int *iPtr)
{
  printf("%d\n",*iPtr);

}
int main()
{
    int Arr[5]={10,20,30,40,50};
    Dispaly(Arr);
    return 0 ;
}