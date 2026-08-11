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
    SinglyLL sobj;

    int iChoise= 0;
    int iValue = 0;
    int iRet = 0;
    int iPosition =0;

    while(iChoise!=9)
    {
        cout<<"--------------------------\n" ;
        cout<<"Enter Your Choise:\n";
        cout<<"--------------------------\n" ;

        cout<<"1:Insert node at first Position\n";
        cout<<"2:Insert node at Last Position\n";
        cout<<"3:Insert node at Given Position\n";
        cout<<"4:Delete node at First Position\n";
        cout<<"5:Delete node at Last Position\n";
        cout<<"6:Delete node at Given Position\n";
        cout<<"7:Display the Element\n";
        cout<<"8:Count the Nodes\n";
        cout<<"9:exict\n";
        cout<<"--------------------------" ;

        cin>>iChoise;

        switch (iChoise)
        {
        case 1:
            cout<<"Enter the Value:\n";
            cin>>iValue;
            sobj.InsertFirst(iValue);
            break;
        case 2:
            cout<<"Enter the Value:\n";
            cin>>iValue;
            sobj.InsertLast(iValue);
            break;
        case 3:
            cout<<"Enter the Value:\n";
            cin>>iValue;
            cout<<"Enter the Position:\n";
            cin>>iPosition;
            sobj.InsertAtPos(iValue,iPosition);
            break;
        case 4:
            sobj.DeleteFirst();
            break;
        case 5: 
            sobj.DeleteLast();
            break;
        case 6:
            cout<<"Enter the Position:\n";
            cin>>iPosition;
            sobj.DeleteAtPos(iPosition);
            break;
        case 7:
            cout<<"Elements of LinkList are:\n";
            sobj.Display();
            break;
        case 8 :
            iRet=sobj.Count();
            cout<<"Number of elements are:"<<iRet<<"\n";
            break;
        case 9 :
            cout<<"Thank you for using Marvellous Infosystem Application\n";
            break;

        default:
            cout<<"Invalid Choise\n";
        
        }
    }
    return 0;
}