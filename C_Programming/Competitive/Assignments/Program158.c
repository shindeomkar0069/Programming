#include<stdio.h>
void  Toggle(char*str)
{
    char ch ='\0';
    
    int i=0;
    

    for(i=0;str[i]!='\0';i++)
    {
        ch = str[i];
        if(ch>='A'&& ch<='Z')
        {
            ch= ch+32;
            
        }
        else if (ch>='a'&&ch<='z')
        {
            ch = ch-32;
        }
        
        printf("%c",ch);
    }
}
int main()
{
    char Arr[20];

    printf("Entar the string:\n");
    scanf("%[^'\n]s",Arr);

    Toggle(Arr);

    return 0;
}
