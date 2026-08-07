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
        printf("| %d | -> ",first->Data);
        first=first->next;

    }
  printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount=0;
    while(first!=NULL)
    {
        iCount++;
        first=first->next;
    }
    return iCount;
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
    int iRet = 0;

    InsertFirst(&hade,101);
    InsertFirst(&hade,51);
    InsertFirst(&hade,21);
    InsertFirst(&hade,11);

    Display(hade);
    
    iRet = Count(hade);
    printf("Number of nodes are:%d\n",iRet);

    return 0;
}