#include<iostream>
using namespace std;
#pragma pack(1)
struct node
{
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCL
{
    private:
      PNODE first;
      PNODE last;
      int iCount;
    public:
      SinglyCL(); 
      
      void Display();
      int Count();

      void InsertFirst(int iNo);
      void InsertLast(int iNo);
      void InsertAtPos(int iNo,int iPos);

      void DeleteFirst();
      void DeleteLast();
      void DeleteAtPos(int iPos);
};

SinglyCL::SinglyCL()
{
    cout<<"Inside Constructor\n";
    this->first=NULL;
    this->last=NULL;
    this->iCount=0;
}

void SinglyCL::Display()
{
    PNODE temp = NULL;
    if(first==NULL&&last==NULL)
    {
        return;
    }
    temp = first;
    do
    {
        cout<<"| "<<temp->Data<<"|->";
        temp=temp->next;
    } while (last->next!=temp);
    cout<<"\n";
    
    

}
int SinglyCL::Count()
{
   return iCount;
}

void SinglyCL::InsertFirst(int iNo)
{
    PNODE newn =NULL;
    newn = new NODE;

    newn->Data=iNo;
    newn->next=NULL;

    if(first==NULL&&last==NULL)
    {
        first=newn;
        last=newn;
    }
    else
    {
        newn->next=first;
        first=newn;     
    }
    last->next=first;
    iCount++;
}
void SinglyCL::InsertLast(int iNo)
{
    PNODE newn =NULL;
    newn = new NODE;

    newn->Data=iNo;
    newn->next=NULL;

    if(first==NULL&&last==NULL)
    {
        first=newn;
        last=newn;
    }
    else
    {
        last->next=newn;
        last=newn;     
    }
    last->next=first;
    iCount++;
}

void SinglyCL::InsertAtPos(int iNo,int iPos)
{
    PNODE newn=NULL;
    PNODE temp=NULL;

     if(iPos < 1 || iPos > iCount + 1)
    {
        return;
    }

    if(iPos==1)
    {
        InsertFirst(iNo);
    }
    else if(iPos==iCount+1)
    {
        InsertLast(iNo);
    }
    else
    {
        int i=0;
        temp=first;

        newn=new NODE;

        newn->Data=iNo;
        newn->next=NULL;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }
    iCount++;
    cout<<"\n";

}

void SinglyCL::DeleteFirst()
{
    PNODE temp=NULL;
    if(first==NULL&&last==NULL)
    {
        return;
    }
    else if(first==last)
    {
        free(first);
        first=NULL;
        last=NULL;
    }
    else
    {
        first=first->next;
        free(last->next);
        last->next=first;
    }
    iCount--;
    cout<<"\n";

}
void SinglyCL::DeleteLast()
{
    PNODE temp=NULL;
    if(first==NULL&&last==NULL)
    {
        return;
    }
    else if(first==last)
    {
        free(first);
        first=NULL;
        last=NULL;
    }
    else
    {
        temp=first;
        while(temp->next!=last)
        {
            temp=temp->next;
        }
        free(last);
        last=temp;
        last->next=first;
    }
    iCount--;
    cout<<"\n";

}
void SinglyCL::DeleteAtPos(int iPos)
{
    PNODE temp= NULL;
    PNODE target=NULL;
    if ((iPos<1)||(iPos>iCount+1))
    {
        return;
    }

    if(iPos==1)
    {
        DeleteFirst();
    }
    else if(iPos==iCount+1)
    {
        DeleteLast();
    }
    else
    {
        int i=0;
        temp=first;
        for(i=1; i<iPos-1; i++)
        {
            temp=temp->next;
        }
        target=temp->next;
        temp->next=target->next;
        free(target);
    }
    iCount--;
    cout<<"\n";
}

int main()
{
    int iRet=0;
    SinglyCL sobj;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);
    
    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    iRet=sobj.Count();
    cout<<"Nodes are "<<iRet;

    sobj.DeleteFirst();
    sobj.Display();
    iRet=sobj.Count();
    cout<<"Nodes are "<<iRet;

    sobj.DeleteLast();
    sobj.Display();
    iRet=sobj.Count();
    cout<<"Nodes are "<<iRet;

    sobj.InsertAtPos(105,4);
    sobj.Display();
    iRet=sobj.Count();
    cout<<"Nodes are "<<iRet;

    sobj.DeleteAtPos(4);
    sobj.Display();
    iRet=sobj.Count();
    cout<<"Nodes are "<<iRet;
    
    return 0;
}



