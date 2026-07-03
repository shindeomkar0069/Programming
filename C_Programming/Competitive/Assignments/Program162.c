#include<stdio.h>
int ChkFreq(char *str, char ch)
{
    int i =0;
    int iCnt = 0;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            iCnt++;
        } 

    }
    return iCnt;
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

    iRet=ChkFreq(Arr,ch);

    printf("Frequency of Character is :%d\n",iRet);


    return 0;
}