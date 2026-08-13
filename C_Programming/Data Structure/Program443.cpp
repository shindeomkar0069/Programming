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
typedef struct node* PNODE;

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
    first = NULL;
    last = NULL;
    iCount = 0;
}

void DoublyCl::Display()
{
    if(first == NULL)
    {
        cout<<"Linked List is empty\n";
        return;
    }

    PNODE temp = first;

    do
    {
        cout<<"|"<<temp->Data<<"|<=>";
        temp = temp->next;
    }while(temp != first);

    cout<<endl;
}

int DoublyCl::Count()
{
    return iCount;
}

void DoublyCl::InsertFirst(int iNo)
{
    PNODE newn = new NODE;

    newn->Data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = last = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }

    first->prev = last;
    last->next = first;

    iCount++;
}

void DoublyCl::Insertlast(int iNo)
{
    PNODE newn = new NODE;

    newn->Data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = last = newn;
    }
    else
    {
        last->next = newn;
        newn->prev = last;
        last = newn;
    }

    last->next = first;
    first->prev = last;

    iCount++;
}

void DoublyCl::InsetrAtPos(int iNo,int iPos)
{
    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        Insertlast(iNo);
    }
    else
    {
        PNODE newn = new NODE;
        newn->Data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        PNODE temp = first;

        for(int i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->prev = temp;
        temp->next->prev = newn;
        temp->next = newn;

        iCount++;
    }
}

void DoublyCl::DeleteFirst()
{
    if(first == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete last->next;

        first->prev = last;
        last->next = first;
    }

    iCount--;
}

void DoublyCl::DeleteLast()
{
    if(first == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        last = last->prev;
        delete last->next;

        last->next = first;
        first->prev = last;
    }

    iCount--;
}

void DoublyCl::DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = first;

        for(int i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        PNODE targated = temp->next;

        temp->next = targated->next;
        targated->next->prev = temp;

        delete targated;

        iCount--;
    }
}

int main()
{
    DoublyCl dobj;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.Insertlast(101);
    dobj.Insertlast(111);
    dobj.Insertlast(121);

    dobj.Display();
    cout<<"Count : "<<dobj.Count()<<endl;

    dobj.DeleteFirst();
    dobj.DeleteLast();

    dobj.Display();
    cout<<"Count : "<<dobj.Count()<<endl;

    dobj.InsetrAtPos(75,4);

    dobj.Display();
    cout<<"Count : "<<dobj.Count()<<endl;

    dobj.DeleteAtPos(4);

    dobj.Display();
    cout<<"Count : "<<dobj.Count()<<endl;

    return 0;
}