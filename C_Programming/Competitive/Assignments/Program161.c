#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkChar(char *str,char ch1)
{
    
    int i =0;
     
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch1)
        {
            return TRUE;
        }
        
    } return FALSE;
}
int main()
{
    char Arr[20];
    char ch ='\0';
    BOOL Ret = FALSE;
    

    printf("Enter the String:\n");
    scanf("%[^'\n]s",Arr);
    
     printf("Enter the Character:\n");
    scanf(" %c", &ch);

    Ret =ChkChar(Arr,ch);

    if(Ret==TRUE)
    {
        printf("Character is Present in the String\n");
    }
    else
    {
        printf("Character is Not Present in the String\n");
    }

    return 0;
}