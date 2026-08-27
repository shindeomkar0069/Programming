class node
{
    public int data;
    public node next;

    node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyCl
{
    private node first;
    private node last;
    private int iCount;

    public SinglyCl()
    {
        this.first=null;
        this.iCount=0;
    }

    public void Display()
    {
        node temp=null;
        temp=first;

        if(first==null)
        {
            return;
        }

        do
        {
          System.out.print("|"+temp.data+"|->");
          temp=temp.next;
        }
        while(temp!=first);

        System.out.println();
    }
    public int Count()
    {
        return iCount;
    }

    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);
        if(first==null||last==null)
        {
            first=newn;
            last=newn;
        }
        else if (first==last)
        {
            first=newn;
            newn.next=last;
        }
        else
        {
            newn.next=first;
            first=newn;
        }
        last.next=first;
        iCount++;
    }

    public void InsertLast(int iNo)
    {
        node newn=new node(iNo);
       
         if(first==null||last==null)
        {
            first=newn;
            last=newn;
        }
        else if (first==last)
        {
            first=newn;
            newn.next=last;
        }
        else
        {
            last.next=newn;
            last=newn;
        }
        last.next=first;
        iCount++;
    }  

    public void InsertAtPos(int iNo,int iPos)
    {
        node newn = new node(iNo);
        node temp=first;
        int i=0;
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
            newn.next=temp.next;
            temp.next=newn;
        }
        last.next=first;
        iCount++;
    }

    public void DeleteFirst()
    {
       
        if(first==null||last==null)
        {
            return;
        }
        else if(first==last)
        {
            first=null;
            last=null;
        }
        else
        {
            first=first.next;
        }
        last.next=first;
        iCount--;
    }

     public void DeleteLast()
    {
        node temp=first;
        if(first==null||last==null)
        {
            return;
        }
        else if(first==last)
        {
            first=null;
            last=null;
        }
        else
        {
            while(temp.next!=last)
            {
                temp=temp.next;
            }
            last=temp;
        }
        last.next=first;
        iCount--;
    }
    public void DeleteAtPos(int iPos)
    {
        int i=0;
        node temp=first;
        if((iPos<1)||(iPos>iCount+1))
        {
            System.out.println("Invalid Position");
            return;
        }

        if(iPos==1)
        {
            DeleteFirst();
        }
        else if(iPos==iCount)
        {
            DeleteLast();
        }
        else
        {
            for(i=1;i<iPos-1;i++)
            {
                temp=temp.next;
            }
            temp.next=temp.next.next;
        }
        last.next=first;
        iCount--;
    }
}

public class Program458X
{
    public static void main(String[] args)
    {
         int iRet = 0;

        SinglyCl sobj = new SinglyCl();
        
        sobj.InsertFirst(101);
        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Numbers of Nodes are:"+iRet);

        sobj.InsertLast(111);
        sobj.InsertLast(121);
        sobj.InsertLast(151);
        
        sobj.Display();

        iRet = sobj.Count();

        System.out.println("Number of nodes are : "+iRet);

        sobj.DeleteFirst();
        sobj.DeleteLast();
        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        sobj.InsertAtPos(105,4);
        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);

        sobj.DeleteAtPos(4);
        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);
    }
}