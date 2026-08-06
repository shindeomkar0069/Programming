#include<stdio.h>
int strlen(char *str)
{
    
    static int Count=0;
    if(*str !='\0')
    {
        Count++;
        strlen(str+1);
    }

    return Count;
}
int main()
{
    int iRet=0;
    char Arr[20];

    printf("Enter the string:\n");
    scanf("%s", Arr);

    iRet=strlen(Arr);
    printf("Count of Charcter in String is:%d\n",iRet);


    return 0;
}