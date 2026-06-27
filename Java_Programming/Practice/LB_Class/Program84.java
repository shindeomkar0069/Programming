import java.util.*;

class DigitX
{
    public int CountDigits (int iNO)
    {
      
      int iCount = 0;
      while (iNO !=0)
      {
        
        iCount++;
        iNO = iNO/10;  
      }
       return  iCount;
    }
}

public class Program84
{  
   public static void main(String A [] )
   {
     Scanner sobj = new Scanner(System.in);
     DigitX dobj = new DigitX();
     int iValue = 0;
     int iRet =0;

     System.out.println("Enter Number :");

     iValue = sobj.nextInt();
     iRet=dobj.CountDigits(iValue);
     System.out.println("Number of Digits :"+iRet);
   }                       
}
