#include<stdio.h>
void StrCpy(char *src,char *dest)
{
    while(*src!= '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char Arr[20];
    char Brr[20];
    
    printf("Enter the String:\n");
    scanf("%[^'\n']s",Arr);

    StrCpy(Arr,Brr);

    printf("%s",Brr);

    return 0;
}