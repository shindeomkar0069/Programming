#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkSymbol(char Ch1)
{
    if(Ch1>'!'& Ch1<'*')
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
    char Ch ='\0';
    char Ans = '\0';

    printf("Enter the character:\n");
    scanf("%c",&Ch);

    Ans=ChkSymbol(Ch);

    if(Ans==TRUE)
    {
        printf("It is The Special Symbol\n");
    }
    else
    {
        printf("It is not Special Symbol\n");
    }

    return 0;
}