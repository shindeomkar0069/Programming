#include<stdio.h>

void CallByValue(int iNo)
{
    iNo++;
}

int main()
{
     int iValue = 11;
     CallByValue(iValue);  //Call by value

     printf("Value after call : %d" ,iValue); 


    
    return 0 ;
}