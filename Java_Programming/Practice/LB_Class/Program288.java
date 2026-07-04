import java.util.*;

class StringX
{
    public String toUpdateX(String str)
    {
        char Arr[] = str.toCharArray();
        int i =0;
        for(i = 0; i<Arr.length;i++)
        {
            if(Arr[i]>='a'&&Arr[i]<='z')
            {    
              Arr[i] = (char)(Arr[i]-32) ; 
            } 
        }
       
        return new String(Arr);
     } 

      public String toLowerX(String str)
    {
        char Arr[] = str.toCharArray();
        int i =0;
        for(i = 0; i<Arr.length;i++)
        {
            if(Arr[i]>='A'&&Arr[i]<='Z')
            {    
              Arr[i] = (char)(Arr[i]+32) ; 
            } 
        }
       
        return new String(Arr);
     } 

      public String Toggle(String str)
    {
        char Arr[] = str.toCharArray();
        int i =0;
        for(i = 0; i<Arr.length;i++)
        {
            if(Arr[i]>='A'&&Arr[i]<='Z')
            {    
              Arr[i] = (char)(Arr[i]+32) ; 
            } 
            else{
               Arr[i] = (char)(Arr[i]-32) ; //ISSU
            }
        }
       
        return new String(Arr);
     } 
}

class Program288
{
    public static void main(String A[])
    {
       Scanner sobj = new Scanner(System.in);
       String data = null;
       StringX strobj = new StringX();
       String sRet = null;
       
       System.out.println("Enter String:");
       data = sobj.nextLine();
       
       sRet =strobj.toUpdateX(data);
       System.out.println("Updated String is :"+sRet);

       sRet =strobj.toLowerX(data);
       System.out.println("lower String is :"+sRet);

       sRet =strobj.Toggle(data);
       System.out.println("Toggle String is :"+sRet);
       
   
    }
}