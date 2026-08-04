#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

struct node
{
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)

{
    while (first!=NULL)
    {
        printf("| %d |->",first->Data);
        first=first->next;
    }    
    printf("\n");

}

BOOL Search(PNODE first,int iNo)
{
    while (first!=NULL)
    {
        if(first->Data==iNo)
        {
            return TRUE;
        }
        first=first->next;
    }
    return FALSE;
   
}

void InsertFirst(PPNODE first,int iNo)
{
    PNODE newn = NULL;
    newn =(PNODE)malloc(sizeof(NODE));
    newn->next=NULL;
    newn->Data=iNo;

    if(*first==NULL)
    {
        *first=newn;
    }
    else
    {
        newn->next=*first;
        *first=newn;
    }

}

int main()
{
    PNODE hade =NULL;
    int iNo=0;
    int iRet=0;
    InsertFirst(&hade,10);
    InsertFirst(&hade,20);
    InsertFirst(&hade,30);
    InsertFirst(&hade,40);

    printf("Enter the Number that you want to Check:\n");
    scanf("%d",&iNo);

    iRet=Search(hade,iNo);

    if(iRet==TRUE)
    {
        printf("Entered Number is there\n");
    }
    else
    {
        printf("Entered Number is Not There\n");
    }

    


    return 0;
}