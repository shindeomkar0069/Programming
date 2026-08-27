class node
{
    public int data;
    public node next;
    public node prev;

    node(int iNo)
    {
        this.data=iNo;
        this.next=null;
        this.prev=null;
    }
}

class DoubluLL
{
    private node first;
    private int iCount;

    public DoubluLL()
    {
        this.first=null;
        this.iCount=0;
    }

    public void Display()
   {
      node temp = first;
        
         System.out.print("null<=>");
         while(temp != null)  
         {
              System.out.print("|" + temp.data + "|<=>");
               temp = temp.next;
          }
             System.out.println("null");

    }

    public int Count()
    {
        return iCount;
    }

    public void InsertFirst(int iNo)
    {
        node newn=new node(iNo);

        if(first==null)
        {
            first=newn;
        }
        else
        {
            newn.next=first;
            newn.prev=null;
            first=newn;
        }
        iCount++;
    }

    public void InsertLast(int iNo)
    {
        node newn=new node(iNo);
        node temp=first;

        if(first==null)
        {
            first=newn;
        }
        else
        {
            while(temp.next!=null)
            {
                temp=temp.next;
            }
            temp.next=newn;
            newn.next=null;
            newn.prev=temp;
        }
        iCount++;
    }

    public void InsertAtPos(int iNo,int iPos)
    {
        node newn=new node(iNo);
        int i=0;
        node temp=first;
        if((iPos<1)||(iPos>iCount+1))
        {
            System.out.println("Invalid Position");
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
            for(i=1;i<iPos-1;i++)
            {
                temp=temp.next;
            }
            newn.next = temp.next;
            newn.prev = temp;
            temp.next.prev = newn;
            temp.next = newn;
        }
        iCount++;
    }

    public void DeleteFirst()
    {
        if(first==null)
        {
            return;
        }
        else if(first.next==null)
        {
            first=null;
        }
        else
        {
            first=first.next;
            first.next.prev=null;
        }
        iCount--;
    }
    public void DeleteLast()
    {
        node temp=first;

        if(first==null)
        {
            return;
        }
        else if(first.next==null)
        {
            first=null;
        }
        else
        {
            while(temp.next.next!=null)
            {
                temp=temp.next;
            }
            temp.next=null;
        }
        iCount--;
    }
    public void DeleteAtPos(int iPos)
{
    int i = 0;
    node temp = first;

    if((iPos < 1) || (iPos > iCount))
    {
        System.out.println("Invalid Position");
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
        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp.next;
        }

        temp.next = temp.next.next;
        temp.next.prev = temp;

        iCount--;
    }
}
}

public class Program459X
{
    public static void main(String[] args) 
    {
        int iRet = 0;

        DoubluLL dobj = new DoubluLL();
        
        dobj.InsertFirst(51);
        dobj.InsertFirst(21);
        dobj.InsertFirst(11);

        dobj.InsertLast(101);
        dobj.InsertLast(111);
        dobj.InsertLast(121);
        
        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of nodes are : "+iRet);
        
        dobj.DeleteFirst();
        dobj.DeleteLast();
        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        dobj.InsertAtPos(125, 4);
        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        dobj.DeleteAtPos(4);
        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of nodes are : "+iRet);
    }
}