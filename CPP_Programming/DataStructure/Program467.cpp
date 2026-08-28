#include<iostream>
using namespace std;
#pragma pack(1)
struct node
{
    int Data; 
    struct node *next;

};

class Stack
{
    private:
      struct node * first;
      int iCount;
    public:
    Stack();
    void Push(int iNo); //InsertFirst
    int Pop();          //DeleteFirst
    int Peep();         //DeleteFirst
    void Display();
    int Count();
};

Stack::Stack()
{
    first=NULL;
    iCount=0;
}
void Stack:: Push(int iNo) 
{
    struct node * newn=NULL;
    newn=new struct node();

    newn->Data=iNo;
    newn->next=NULL;

    newn->next=first;
    first=newn;
    iCount++;
    
}
int Stack::Pop()       
{
    struct node * temp=NULL;
    int iValue=0;

    if(first==NULL)
    {
        cout<<"Stack is Empty\n";
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
int Stack::Peep()    
{
    int iValue=0;

    if(first==NULL)
    {
        cout<<"Stack is Empty\n";
        return -1;
    }
    else
    {
        iValue=first->Data;
        return iValue;

    }
}     
void Stack:: Display()
{
    struct node * temp=NULL;
    temp=first;

    while(temp!=NULL)
    {
        cout<<"| "<<temp->Data<<"|\n";
        temp=temp->next;
    }


}
int Stack:: Count()
{
    return iCount;
}
int main()
{
    Stack sobj;
    int iRet=0;
    int iValue =0;

    sobj.Push(11);
    sobj.Push(21);
    sobj.Push(51);
    sobj.Push(101);

    sobj.Display();
    iRet=sobj.Count();
    cout<<"Elements in the stack are :"<<iRet<<"\n";

    
    iValue=sobj.Pop();
    cout<<"Popped Element is:"<<iValue<<"\n";
    sobj.Display();
    iRet=sobj.Count();
    cout<<"Elements in the stack are :"<<iRet<<"\n";

    iValue=sobj.Peep();
    cout<<"Peeded Element is :"<<iValue<<"\n";
    sobj.Display();
    iRet=sobj.Count();
    cout<<"Elements in the stack are :"<<iRet<<"\n";


    
    
    
    
   return 0;
}