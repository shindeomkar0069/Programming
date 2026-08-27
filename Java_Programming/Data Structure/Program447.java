class node
{
    public int Data;
    public node next;
}


public class Program447
{
    public static void main(String A [] ) 
    {
         node hade=null;

        node obj1=null;
        node obj2=null;
        node obj3=null;

        obj1=new node();
        obj2=new node();
        obj3=new node();

        obj1.Data=11;
        obj2.Data=21;
        obj3.Data=51;

        obj1.next=obj2;
        obj2.next=obj3;
        obj3.next=null;

        hade=obj1;

        System.out.println(hade.Data);
        
        hade=hade.next;
        System.out.println(hade.Data);
        
        hade=hade.next;
        System.out.println(hade.Data);
    }
}
    

