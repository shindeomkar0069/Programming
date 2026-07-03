#include<stdio.h>
#include<string.h> 

int main()
{
    char str[]="Jay Ganesh";

    int iRet = 0;
    
    iRet=strlen(str); //10
    iRet=sizeof(str); //11

    printf("length of string is:%d\n",iRet);
    printf("Size of string is:%d\n",iRet);

    return 0 ;
}