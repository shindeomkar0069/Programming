#include<stdio.h>
int LastChar(char *str, char ch)
{
    int i = 0;
    int iIndex = -1;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            iIndex = i;
        }
    }

    return iIndex;
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

    iRet=LastChar(Arr,ch);

    printf("Location Of Character is :%d\n",iRet);


    return 0;
}