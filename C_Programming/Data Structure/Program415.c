#include<stdlib.h>
#include<stdio.h>
#pragma pack(1)
struct node
{
    int Data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node**  PPNODE;

void Display(PNODE first,PNODE last)
{}

int Count(PNODE first,PNODE last)
{
    return 0;
}

void InsertFirst(PPNODE first,PPNODE last,int iNo)
{}

void InsertLat(PPNODE first,PPNODE last,int iNo)
{}

void InsertAtPos(PPNODE first,PPNODE last,int iNo,int iPos)
{}

void DeleteFirst(PPNODE first,PPNODE last)
{}

void DeleteLat(PPNODE first,PPNODE last)
{}

void DeleteAtPos(PPNODE first,PPNODE last,int iPos)
{}

int main()
{
    PNODE hade =NULL;
    PNODE tail =NULL;


    return 0;
}