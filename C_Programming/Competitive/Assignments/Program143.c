#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
   
    if (ch>'0'&&ch<'9')
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

    printf("Enter the digit :\n");
    scanf("%c",&cvalue);

    bRet = ChkDigit(cvalue);

    if (bRet ==TRUE)
    {
        printf("it is digit\n");
    }
    else
    {
        printf("it is not digit\n");
    }

    return 0;
}