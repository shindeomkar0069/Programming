import java.util.*;

class StringX
{
    public int CountSmall(String str)
    {
        int iCount =0,i = 0;
        
        char Arr[]=str.toCharArray();

        for(i =0; i<Arr.length;i++)
        {
            if(Arr[i]>='a'&& Arr[i]<='z')
            {
                iCount++;
            }
        } 
        return iCount;
    }

    public int CountCapital(String str)
    {
        int iCount =0,i = 0;
     
        char Arr[]=str.toCharArray();

        for(i =0; i<Arr.length;i++)
        {
            if(Arr[i]>='A'&& Arr[i]<='Z')
            {
                iCount++;
            }
        } 
        return iCount;
    }

    public int CountDigites(String str)
    {
        int iCount =0,i = 0;
        
        char Arr[]=str.toCharArray();

        for(i =0; i<Arr.length;i++)
        {
            if(Arr[i]>='0'&& Arr[i]<='9')
            {
                iCount++;
            }
        } 
        return iCount;
    }

}

class Program273
{
    public static void main(String A[])
    {
       Scanner sobj = new Scanner(System.in);
       String data = null;

       StringX strobj = new StringX();
       int iRet =0;
       System.out.println("Enter String:");
       data = sobj.nextLine();
       
       iRet = strobj.CountCapital(data);
       System.out.println("Number of capital character is:"+iRet);

        iRet = strobj.CountSmall(data);
       System.out.println("Number of Small character is:"+iRet);

       iRet = strobj.CountDigites(data);
       System.out.println("Number of Digites are is:"+iRet);
   
    }
}
