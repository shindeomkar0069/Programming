#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
   
    if (ch>'a'&&ch<'z'||
        ch>'A'&&ch<'Z')
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
    char cvalue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character :\n");
    scanf("%c",&cvalue);

    bRet = ChkAlpha(cvalue);

    if (bRet ==TRUE)
    {
        printf("it is character\n");
    }
    else
    {
        printf("it is not character\n");
    }

    return 0;
}