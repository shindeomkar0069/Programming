#include<stdio.h>
void  TOLower(char*str)
{
    char ch ='\0';
    
    int i=0; 

    for(i=0;str[i]!='\0';i++)
    {
        ch = str[i];
        if(ch>='0' && ch<='9')
        {
          printf("%c",ch);  
            
        }
        
    }
}
int main()
{
    char Arr[20];

    printf("Entar the string:\n");
    scanf("%[^'\n]s",Arr);

    TOLower(Arr);

    return 0;
}
