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

int Search(PNODE first)
{
    
    int iCount=0;

    while(first!=NULL)
    {
        if(((first)->Data)%2!=0)
        {
            iCount++;
        }
        first=first->next;
    }
    return iCount;

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

    Display(hade);

    iRet=Search(hade);
    printf("Numbers of odd elements are: %d",iRet);


    return 0;
}