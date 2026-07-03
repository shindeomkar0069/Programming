#include<stdio.h>
void  TOUpper(char*str)
{
    char ch ='\0';
    
    int i=0;
    

    for(i=0;str[i]!='\0';i++)
    {
        ch = str[i];
        if(ch>='a'&& ch<='z')
        {
            ch= ch-32;
            
        }
        printf("%c",ch);
    }
}
int main()
{
    char Arr[20];

    printf("Entar the string:\n");
    scanf("%[^'\n]s",Arr);

    TOUpper(Arr);

    return 0;
}
