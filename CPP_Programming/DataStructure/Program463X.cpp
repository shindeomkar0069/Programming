#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int Data;
    struct node *next;
};

class SinglyCL
{
private:
    struct node *first;
    struct node *last;
    int iCount;

public:
    SinglyCL();

    void Display();
    int Count();

    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPos(int iNo, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

SinglyCL::SinglyCL()
{
    cout << "Inside Constructor\n";
    first = NULL;
    last = NULL;
    iCount = 0;
}

void SinglyCL::Display()
{
    struct node *temp = NULL;

    if(first == NULL && last == NULL)
    {
        return;
    }

    temp = first;

    do
    {
        cout << "| " << temp->Data << " |->";
        temp = temp->next;
    } while(last->next != temp);

    cout << "\n";
}

int SinglyCL::Count()
{
    return iCount;
}

void SinglyCL::InsertFirst(int iNo)
{
    struct node *newn = new node;

    newn->Data = iNo;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }

    last->next = first;
    iCount++;
}

void SinglyCL::InsertLast(int iNo)
{
    struct node *newn = new node;

    newn->Data = iNo;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        last = newn;
    }

    last->next = first;
    iCount++;
}

void SinglyCL::InsertAtPos(int iNo, int iPos)
{
    struct node *newn = NULL;
    struct node *temp = NULL;

    if(iPos < 1 || iPos > iCount + 1)
    {
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
        temp = first;

        newn = new node;

        newn->Data = iNo;
        newn->next = NULL;

        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }

    iCount++;
    cout << "\n";
}

void SinglyCL::DeleteFirst()
{
    if(first == NULL && last == NULL)
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
        last->next = first;
    }

    iCount--;
    cout << "\n";
}

void SinglyCL::DeleteLast()
{
    struct node *temp = NULL;

    if(first == NULL && last == NULL)
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
        temp = first;

        while(temp->next != last)
        {
            temp = temp->next;
        }

        delete last;
        last = temp;
        last->next = first;
    }

    iCount--;
    cout << "\n";
}

void SinglyCL::DeleteAtPos(int iPos)
{
    struct node *temp = NULL;
    struct node *target = NULL;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount + 1)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = target->next;

        delete target;
    }

    iCount--;
    cout << "\n";
}

int main()
{
    int iRet = 0;

    SinglyCL sobj;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    iRet = sobj.Count();
    cout << "Nodes are " << iRet << endl;

    sobj.DeleteFirst();
    sobj.Display();
    cout << "Nodes are " << sobj.Count() << endl;

    sobj.DeleteLast();
    sobj.Display();
    cout << "Nodes are " << sobj.Count() << endl;

    sobj.InsertAtPos(105, 4);
    sobj.Display();
    cout << "Nodes are " << sobj.Count() << endl;

    sobj.DeleteAtPos(4);
    sobj.Display();
    cout << "Nodes are " << sobj.Count() << endl;

    return 0;
}