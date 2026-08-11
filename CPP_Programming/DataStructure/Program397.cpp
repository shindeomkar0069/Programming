#include <iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int main()
{
    PNODE newn =NULL;
    
    newn = new NODE;

    newn->Data=11;
    newn->next=NULL;

    cout<<newn->Data<<endl;

    delete newn;

    return 0;
}