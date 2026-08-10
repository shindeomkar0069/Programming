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
    while(first!=NULL)   //type1
    {
        printf("| %d | -> ",first->Data);
        first=first->next;

    }
  printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount=0;
    while(first!=NULL)  //type1
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
    
    if(NULL==*first) //LL is empty
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
    PNODE temp = NULL;
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
        temp = *first;
        while(temp->next!=NULL)  //type2
        {
           temp = temp->next; 
        }
        temp->next=newn;     
    }
}

void InsertAtPos(PPNODE first,int iNo,int ipos)
{
   
}

void DeleteFirst(PPNODE first)
{
    PNODE temp =NULL;
    if(*first==NULL)                //LL os emplty
    {
        return;
    }
    else if((*first)->next==NULL)     //LL contains only one node
    {
        free(*first);
        *first=NULL;
    }
    else                            //LL contains more than one node
    {
        temp = *first;

        *first = (*first)->next;
        free(temp); 

    }
    
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;
    if(*first==NULL)                //LL os emplty
    {
        return;
    }
    else if((*first)->next==NULL)     //LL contains only one node
    {
        free(*first);
        *first=NULL;
    }
    else                            //LL contains more than one node
    {
        temp = *first;
        while (temp->next->next !=NULL)
        {
            temp =temp->next;
        }

        free(temp->next);
        temp->next=NULL;
    }
    
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

    InsertLast(&hade,111);
    InsertLast(&hade,121);

    Display(hade);

    iRet = Count(hade);
    printf("Number of nodes are:%d\n",iRet);

    DeleteFirst(&hade);
    
    Display(hade);

    iRet = Count(hade);
    printf("Number of nodes are:%d\n",iRet);

    DeleteLast(&hade);

      Display(hade);

    iRet = Count(hade);
    printf("Number of nodes are:%d\n",iRet);

    return 0;
}