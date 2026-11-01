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
    if(first!=NULL)
    {
        printf("| %d | -> ",first->Data);
        Display(first->next);
    }
}

int Count(PNODE first)
{
     static int iCount=0;
    if(first!=NULL)
    {
        iCount++;
        first=first->next;
        Count(first);
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
    printf("\nNumber of nodes are:%d\n",iRet);

    return 0;
}