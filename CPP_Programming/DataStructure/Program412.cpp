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

class SinglyLL
{
private:
    PNODE first;
    int iCount;

public:
    SinglyLL();
    void Display();
    int Count();
    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPos(int iNo, int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

SinglyLL::SinglyLL()
{
    first = NULL;
    iCount = 0;
}

void SinglyLL::Display()
{
    PNODE temp = first;

    while(temp != NULL)
    {
        cout << "| " << temp->Data << " |-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int SinglyLL::Count()
{
    return iCount;
}

void SinglyLL::InsertFirst(int iNo)
{
    PNODE newn = new NODE;

    newn->Data = iNo;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }

    iCount++;
}

void SinglyLL::InsertLast(int iNo)
{
    PNODE newn = new NODE;
    PNODE temp = NULL;

    newn->Data = iNo;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }

    iCount++;
}

void SinglyLL::InsertAtPos(int iNo, int iPos)
{
    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout << "Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        PNODE newn = new NODE;
        PNODE temp = first;

        newn->Data = iNo;
        newn->next = NULL;

        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

void SinglyLL::DeleteFirst()
{
    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        PNODE temp = first;
        first = first->next;
        delete temp;
    }

    iCount--;
}

void SinglyLL::DeleteLast()
{
    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        PNODE temp = first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    iCount--;
}

void SinglyLL::DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > iCount))
    {
        cout << "Invalid Position\n";
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
        PNODE target = NULL;

        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = target->next;
        delete target;

        iCount--;
    }
}

int main()
{
    int iRet = 0;
    SinglyLL sobj;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();
    iRet = sobj.Count();
    cout << "Number of Elements: " << iRet << endl;

    sobj.InsertLast(101);
    sobj.InsertLast(121);
    sobj.InsertLast(151);

    sobj.Display();
    iRet = sobj.Count();
    cout << "Number of Elements: " << iRet << endl;

    sobj.DeleteLast();
    sobj.Display();
    iRet = sobj.Count();
    cout << "Number of Elements: " << iRet << endl;

    sobj.InsertAtPos(105, 4);
    sobj.Display();
    iRet = sobj.Count();
    cout << "Number of Elements: " << iRet << endl;

    sobj.DeleteAtPos(4);
    sobj.Display();
    iRet = sobj.Count();
    cout << "Number of Elements: " << iRet << endl;

    return 0;
}