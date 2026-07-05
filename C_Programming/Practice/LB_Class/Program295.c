#include<stdio.h>

void StrrevX(char *str)
{
  char *start = NULL;
  char *end = NULL;
  start = str;
  while (*str!='\0')
  {
    str++;
  }
  str--;
  while(start<= str)
  {
    printf("%s\n",str);
    str--;
  }
  printf("\n");
  
}

int main()
{
   char Arr[50]={'\0'};

   printf("Enter the string\n");
   scanf("%[^'\n]s",Arr);

   StrrevX(Arr);
   
   return 0 ;
}