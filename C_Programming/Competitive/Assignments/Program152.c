#include<stdio.h>
int CountSmall(char*str)
{
    int iCnt = 0;
    char ch ='\0';
    while(*str !='\0')
    {
        ch = *str;
        if(ch>='a'&&ch<='z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
   
int main()
{
    char Arr[20];
    int iRet =0;
   

    printf("Entar the String:\n");
    scanf("%[^'\n]s",&Arr);

    iRet = CountSmall(Arr);
    printf("count of small:%d",iRet);

   

    return 0;
}