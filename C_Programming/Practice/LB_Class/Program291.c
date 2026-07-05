#include<stdio.h>

void RevereseDisplay(char *str)
{
  char *start = NULL;
  start = str;
  while (*str!='\0')
  {
    str++;
  }
  //Issue
  while(start<= str)
  {
    printf("%c\n",*str);
    str--;
  }
  
}

int main()
{
   char Arr[50]={'\0'};

   printf("Enter the string\n");
   scanf("%[^'\n]s",Arr);

   RevereseDisplay(Arr);
   


    return 0 ;
}