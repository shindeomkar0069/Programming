#include <iostream>
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

class DoublyLL
{
private:
    PNODE first;
    int iCount;

public:
    DoublyLL();

    void Display();
    int Count();

    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPos(int iNo, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

DoublyLL::DoublyLL()
{
    this->first = NULL;
    this->iCount = 0;
}

void DoublyLL::Display()
{
    PNODE temp = this->first;

    cout << "NULL <=> ";

    while(temp != NULL)
    {
        cout << "|" << temp->Data << "| <=> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int DoublyLL::Count()
{
    return this->iCount;
}

void DoublyLL::InsertFirst(int iNo)
{
    PNODE newn = new NODE;

    newn->Data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev = newn;
        this->first = newn;
    }

    this->iCount++;
}

void DoublyLL::InsertLast(int iNo)
{
    PNODE newn = new NODE;

    newn->Data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        PNODE temp = this->first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }

    this->iCount++;
}

void DoublyLL::InsertAtPos(int iNo, int iPos)
{
    if((iPos < 1) || (iPos > this->iCount + 1))
    {
        cout << "Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == this->iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        PNODE newn = new NODE;
        PNODE temp = this->first;

        newn->Data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->prev = temp;

        temp->next->prev = newn;
        temp->next = newn;

        this->iCount++;
    }
}

void DoublyLL::DeleteFirst()
{
    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        PNODE temp = this->first;

        this->first = this->first->next;
        this->first->prev = NULL;

        delete temp;
    }

    this->iCount--;
}

void DoublyLL::DeleteLast()
{
    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        PNODE temp = this->first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    this->iCount--;
}

void DoublyLL::DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > this->iCount))
    {
        cout << "Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == this->iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = this->first;
        PNODE target = NULL;

        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;

        temp->next = target->next;
        target->next->prev = temp;

        delete target;

        this->iCount--;
    }
}

int main()
{
    DoublyLL dobj;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.InsertLast(101);
    dobj.InsertLast(121);

    cout << "Initial List:\n";
    dobj.Display();

    dobj.InsertAtPos(105, 4);

    cout << "\nAfter InsertAtPos(25,3):\n";
    dobj.Display();

    dobj.DeleteFirst();

    cout << "\nAfter DeleteFirst():\n";
    dobj.Display();

    dobj.DeleteLast();

    cout << "\nAfter DeleteLast():\n";
    dobj.Display();

    dobj.DeleteAtPos(4);

    cout << "\nAfter DeleteAtPos(4):\n";
    dobj.Display();

    cout << "\nTotal Nodes : " << dobj.Count() << endl;

    return 0;
}