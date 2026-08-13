#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int Data;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;
typedef struct node*  PNODE;

#pragma pack(1)
class DoublyCl
{
    private:
     PNODE first;
     PNODE last;
     int iCount;
    public:
     DoublyCl();

     void Display();
     int Count();

     void InsertFirst(int iNo);
     void Insertlast(int iNo);
     void InsetrAtPos(int iNo,int iPos);

     void DeleteFirst();
     void DeleteLast();
     void DeleteAtPos(int iPos);
};
DoublyCl::DoublyCl()
{
    cout<<"Inside Constructor\n";
    first=NULL;
    last=NULL;
    iCount=0;
}
void DoublyCl::Display()
{}
int DoublyCl:: Count()
{
    return iCount;
}
void DoublyCl::InsertFirst(int iNo)
{}
void DoublyCl::Insertlast(int iNo)
{}
void DoublyCl::InsetrAtPos(int iNo,int iPos)
{}

void DoublyCl::DeleteFirst()
{}
void DoublyCl:: DeleteLast()
{}
void DoublyCl::DeleteAtPos(int iPos)
{}
int main()
{
    DoublyCl dobj;
    
    return 0 ;
}
