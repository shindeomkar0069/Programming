#include<stdio.h>
int CountFrequency(char*str)
{
    int iCnt1 = 0;
    int iCnt2 =0;
    char ch ='\0';
    int iRet = 0;
    while(*str !='\0')
    {
        ch = *str;
        if(ch>='a'&&ch<='z')
        {
            iCnt1++;
        }
        
        else if (ch >= 'A' && ch <= 'Z')
        {
            iCnt2++;
        }

        str++;
    }
            iRet = iCnt1 - iCnt2;
           return iRet;

}
   
int main()
{
    char Arr[20];
    int iRet =0;
   

    printf("Entar the String:\n");
    scanf("%[^'\n]",&Arr);

    iRet = CountFrequency(Arr);
    printf("Frequency is:%d",iRet);

   

    return 0;
}
