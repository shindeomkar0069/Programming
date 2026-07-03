#include<stdio.h>
void StrCpy(char *src,char *dest,int n)
{
    int i = 0;
    
    
    while(*src!= '\0'&& i<n)
    {
      
        *dest = *src;
        src++;
        dest++;
        i++;
        
    }
    *dest = '\0';
}
int main()
{
    char Arr[20];
    char Brr[20];
    int n =0;

    printf("Enter the String:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter number of characters to copy:");
    scanf("%d", &n);

    StrCpy(Arr,Brr,n);

    printf("%s",Brr);

    return 0;
}