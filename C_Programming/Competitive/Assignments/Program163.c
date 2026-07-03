#include<stdio.h>
int FirstChar(char *str, char ch)
{
    int i =0;
    int iCnt = 0;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            return i;
        } 
        else
        {
            return -1;
        }

    }
    
}
int main()
{
    char Arr[20];
    char ch ='\0';
    int iRet = 0;

    printf("Entar the String:\n");
    scanf("%[^\n]s",Arr);

    printf("Enter the Character:\n");
    scanf(" %c",&ch);

    iRet=FirstChar(Arr,ch);

    printf("Location Of Character is :%d\n",iRet);


    return 0;
}