#include<stdio.h>

void StrrevX(char *str)
{
  char *start = NULL;
  char *end = NULL;
  char temp = '\0';
  start = str;
  while (*str!='\0')
  {
    str++;
  }
  str--;
  end = str;
  while(start<end)
  {
    temp = *start;
    *start =*end;
    *end = temp;
    str--;
    start++;
  }
  
}

int main()
{
   char Arr[50]={'\0'};

   printf("Enter the string\n");
   scanf("%[^'\n]s",Arr);

   StrrevX(Arr);
   printf("Updared string is:\n",Arr);   
   return 0 ;
}