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

public class Program450
{
    public static void main(String A [] ) 
    {
        node newn=new node(11);
        System.out.println(newn.Data);
        System.out.println(newn.next);
      
    }
}
    

