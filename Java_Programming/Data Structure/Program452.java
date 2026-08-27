class node
{
    public int Data;
    public node next;

    node(int no)
    {
        this.Data=no;
        this.next=null;
    }
}

class SinglyLL
{
    private node first;
    private int iCount;

    public SinglyLL()
    {
        this.first=null;
        this.iCount=0;

        System.out.println("inside constructor");
    }
    public void Display()
    {}
    public int Count()
    {
        return iCount;
    }
    public void InsertFirst(int iNo)
    {}   
    public void InsertLast(int iNo)
    {}
    public void InsertAtPos(int iNo,int iPos)
    {}

    public void DeleteFirst()
    {}
    public void DeleteLast()
    {}
    public void DeleteAtPos(int iPos)
    {}
}

public class Program452
{
    public static void main(String A [] ) 
    {
        SinglyLL sobj = new SinglyLL();
        
    }
}
    

