import java.util.*;

class StringX
{
    public String Update(String str)
    {
        char Arr[] = str.toCharArray();
        int i =0;
        for(i = 0; i<Arr.length;i++)
        {
            if(Arr[i]=='a'||Arr[i]=='A')
            {
                Arr[i]='_';

            }
        } 
       
        return new String(Arr);
     } 

}

class Program279
{
    public static void main(String A[])
    {
       Scanner sobj = new Scanner(System.in);
       String data = null;
       StringX strobj = new StringX();
       String sRet = null;
       
       System.out.println("Enter String:");
       data = sobj.nextLine();
       
       sRet =strobj.Update(data);
       System.out.println("Updated String is :"+sRet);
       
   
    }
}