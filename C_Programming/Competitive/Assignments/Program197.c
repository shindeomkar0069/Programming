#include<stdio.h>
#include<stdlib.h>

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
    
    printf("NULL\n");
}

int FirstOccurrence(PNODE first, int iNo)
{
    int iPos = 1;

    while(first != NULL)
    {
        if(first->Data == iNo)
        {
            return iPos;
        }

        first = first->next;
        iPos++;
    }

    return -1;   // Element not found
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
    InsertFirst(&hade,33);
    InsertFirst(&hade,40);
    InsertFirst(&hade,36);
    InsertFirst(&hade,30);
    InsertFirst(&hade,39);

    Display(hade);

   

    printf("Enter the element: ");
    scanf("%d", &iNo);

    iRet = FirstOccurrence(hade, iNo);

    if(iRet == -1)
    {
        printf("Element not found.\n");
    }
    else
    {
        printf("First occurrence is at position %d\n", iRet);
    }

        return 0;
}