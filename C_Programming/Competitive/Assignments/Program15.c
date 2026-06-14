#include<stdio.h>
typedef int boolean;
#define TRUE 1
#define FALSE 0
boolean ChkVowel(char Cvalue)

{
    if(Cvalue == 'a' || Cvalue == 'e' || Cvalue == 'i' || Cvalue == 'o' || Cvalue == 'u')
    
   

      
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
    char cValue = '\0';
    boolean bRet = FALSE;

    printf("Enter Character\n");
    scanf("%c",&cValue);

    bRet =  ChkVowel(cValue);
    if (bRet == TRUE )
    {
        printf("It is Vowel");

    }
    else
    {
        printf("It is not Vowel");
    }
    return 0;
}
