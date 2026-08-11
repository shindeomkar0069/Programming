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
        void InsertAtPos(int iNo,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);       
};

SinglyLL::SinglyLL()
{
    this->first=NULL;
    this->iCount=0;
}
void SinglyLL::Display()
{
    PNODE temp =NULL;
    temp=this->first;
    while(temp != NULL)
    {
        cout<<"| "<<temp->Data<<" |-> ";
        temp=temp->next;
    }
    cout<<"NULL\n";
}
int SinglyLL::Count()
{
    return this->iCount;
}
void SinglyLL::InsertFirst(int iNo)
{
    PNODE newn =NULL;
    newn = new NODE;

    newn->Data= iNo;
    newn->next= NULL;

    if(this->first==NULL) 
    {
       this->first=newn;
    }
    else
    {
       newn->next=this->first;
       this->first=newn;
    }
    this->iCount++;  //Important
}
void SinglyLL::InsertLast(int iNo)
{
    PNODE newn =NULL;
    newn = new NODE;
    PNODE temp = NULL;

    newn->Data= iNo;
    newn->next= NULL;

    if(this->first==NULL)
    {
       this->first=newn;
    }
    else
    {
        temp=this->first;

        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next=newn;
    }

    this->iCount++;  //Important
    
}
void SinglyLL::InsertAtPos(int iNo, int iPos)
{
    if(iPos < 1 || iPos > this->iCount + 1)
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
        newn->Data = iNo;
        newn->next = NULL;

        PNODE temp = this->first;

        for(int i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        this->iCount++;
    }
}
void SinglyLL:: DeleteFirst()
{
    PNODE temp =NULL;
    if(this->first==NULL)
    {
        return;
    }
    else if (this->first->next==NULL)
    {
        delete this->first;
        this->first=NULL;
    }
    else
    {
        temp =this->first;
        this->first=this->first->next;     
    }
    this->iCount--;
    

}
void SinglyLL::DeleteLast()
{
    PNODE temp =NULL;
    if(this->first==NULL)
    {
        return;
    }
    else if (this->first->next==NULL)
    {
        delete this->first;
        this->first=NULL;
    }
    else
    {
        temp=this->first;
        while(temp->next->next!= NULL)
        {
            temp=temp->next;
        }
        delete temp;
        temp->next=NULL;

    }
    this->iCount--;

}
void SinglyLL::DeleteAtPos(int iPos) 
{
    int i=0;
    PNODE temp =NULL;
    

    if((iPos<1)||(iPos>iCount))
    {
        cout<<"Invalid Position\n";
        return;
    }
    if(iPos=11)
    {
        this->DeleteFirst();
    }
    else if(iPos==iCount)
    {
      this->DeleteLast();
    }
    else
    {
        temp =this->first;
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        
        this->iCount--;

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
    iRet=sobj.Count();
    cout<<"Number of Elenments:"<<iRet<<endl;

    sobj.InsertLast(101);
    sobj.InsertLast(121);
    sobj.InsertLast(151);

    sobj.Display();
    iRet=sobj.Count();
    cout<<"Number of Elenments:"<<iRet<<endl;


    sobj.DeleteLast();
    sobj.Display();
    iRet=sobj.Count();
    cout<<"Number of Elenments:"<<iRet<<endl;

    sobj.InsertAtPos(105,4);
    sobj.Display();
    iRet=sobj.Count();
    cout<<"Number of Elenments:"<<iRet<<endl;

   

    
    
    return 0;
}