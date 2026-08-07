#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node**  PPNODE;

void Display(PNODE first)
{
    while(first!=NULL)
    {
        printf("%d\t",first->Data);
        first=first->next;

    }
  printf("\n");
}

int Count(PNODE first)
{
    return 0;
}

void InsertFirst(PPNODE first,int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data=iNo;
    newn->next=NULL;

    if(*first==NULL) //LL is empty
    {
        *first = newn;

    }
    else //LL contain atleast 1 node
    {
        newn->next=*first;
        *first=newn;
    }
}

void InsertLast(PPNODE first,int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data=iNo;
    newn->next=NULL;

    if(*first==NULL) //LL is empty
    {
        *first = newn;

    }
    else //LL contain atleast 1 node
    {
          
    }
}

void InsertAtPos(PPNODE first,int iNo,int ipos)
{
   
}

void DeleteFirst(PPNODE first)
{
    
}

void DeleteLast(PPNODE first)
{
    
}

void DeleteAtPos(PPNODE first,int iPos)
{
    
}

int main()
{
    PNODE hade = NULL;
    InsertFirst(&hade,101);
    InsertFirst(&hade,51);
    InsertFirst(&hade,21);
    InsertFirst(&hade,11);

    Display(hade);

    return 0;
}