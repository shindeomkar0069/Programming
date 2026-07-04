import java.util.*;

class Program276
{
    public static void main(String A[])
    {
       Scanner sobj = new Scanner(System.in);
       String data = null;

       StringX strobj = new StringX();  //Error
       int iRet =0;
       System.out.println("Enter String:");
       data = sobj.nextLine();
       
       iRet = strobj.CountCapital(data);
       System.out.println("Number of capital character is:"+iRet);

        iRet = strobj.CountSmall(data);
       System.out.println("Number of Small character is:"+iRet);

       iRet = strobj.CountDigites(data);
       System.out.println("Number of Digites are :"+iRet);

       iRet = strobj.CountSpace(data);
       System.out.println("Number of White spaces are :"+iRet);

       iRet = strobj.CountSpecial(data);
       System.out.println("Number of Special Symbol are :"+iRet);
   
    }
}