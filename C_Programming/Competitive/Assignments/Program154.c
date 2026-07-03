#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkVowel(char *str)
{
    char ch ='\0';
    ch=*str;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Entar the String:\n");
    scanf("%[^\n]s",Arr);

    bRet=ChkVowel(Arr);

    if(bRet==TRUE)
    {
        printf("String Contain Vowel\n");
    }
    else
    {
        printf("String Not Contain Vowel\n");
    }


    return 0;
}