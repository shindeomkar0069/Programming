#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSmall(char ch)
{
   
    if (ch>'a'&&ch<'z')
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

    bRet = ChkSmall(cvalue);

    if (bRet ==TRUE)
    {
        printf("it is captial character\n");
    }
    else
    {
        printf("it is not captial character\n");
    }

    return 0;
}