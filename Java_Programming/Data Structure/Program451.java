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
    public node first;
    public int iCount;

    public SinglyLL()
    {
        this.first=null;
        this.iCount=0;

        System.out.println("inside constructor");
    }
}

public class Program451
{
    public static void main(String A [] ) 
    {
        SinglyLL sobj = new SinglyLL();
        
    }
}
    

