#include<stdio.h>
int TOLower(char*str)
{
    char ch ='\0';
    int iCnt = 0; 
    int i=0; 

    for(i=0;str[i]!='\0';i++)
    {
        ch = str[i];
        if(ch==' ')
        {
          iCnt++ ; 
        }
        
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Entar the string:\n");
    scanf("%[^'\n]s",Arr);

   iRet= TOLower(Arr);

   printf("Number of WhiteSpaces are :%d",iRet);

    return 0;
}
