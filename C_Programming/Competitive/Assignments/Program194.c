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

int Frequency(PNODE first,int iNo)
{
    
    int iCount=0;

    while(first!=NULL)
    {
        if(((first)->Data)==iNo)
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
    InsertFirst(&hade,10);

    printf("Enter the element that you want to Check Frequency:\n");
    scanf("%d",&iNo);

    iRet=Frequency(hade,iNo);
    if(iRet==0)
    {
        printf("There is no such element present in linklist\n");
    }
    else
    {
          printf("Frequency of entered elements are: %d",iRet);
    }

    return 0;
}