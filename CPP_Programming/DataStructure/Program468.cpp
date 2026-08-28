#include<iostream>
using namespace std;
#pragma pack(1)
struct node
{
    int Data; 
    struct node *next;

};

class Queue
{
    private:
      struct node * first;
      int iCount;
    public:
    Queue();
    void Enqueue(int iNo); //InsertLat
    int Dequeue();          //DeleteFirst
    void Display();
    int Count();
};

Queue::Queue()
{
    first=NULL;
    iCount=0;
}
void Queue:: Enqueue(int iNo) 
{
    struct node * newn=NULL;
    struct node * temp=NULL;
    newn=new struct node();

    newn->Data=iNo;
    newn->next=NULL;

    if(first==NULL)
    {
        first=newn;
    }

    else
    {
        temp=first;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
    iCount++;
}
int Queue::Dequeue()       
{
    struct node * temp=NULL;
    int iValue=0;

    if(first==NULL)
    {
        cout<<"Queue is Empty\n";
        return -1;
    }
    else
    {
        iValue=first->Data;
        temp=first;
        first=first->next;
        delete(temp);
        iCount--;
        return iValue;

    }
}   
     
void Queue:: Display()
{
    struct node * temp=NULL;
    temp=first;

    while(temp!=NULL)
    {
        cout<<"| "<<temp->Data<<"|\n";
        temp=temp->next;
    }


}
int Queue:: Count()
{
    return iCount;
}
int main()
{
    Queue sobj;
    int iRet=0;
    int iValue =0;

    sobj.Enqueue(11);
    sobj.Enqueue(21);
    sobj.Enqueue(51);
    sobj.Enqueue(101);

    sobj.Display();
    iRet=sobj.Count();
    cout<<"Elements in the Queue are :"<<iRet<<"\n";

    
    iValue=sobj.Dequeue();
    cout<<"DequeueedQueue Element is:"<<iValue<<"\n";
    sobj.Display();
    iRet=sobj.Count();
    cout<<"Elements in the Queue are :"<<iRet<<"\n";


   return 0;
}