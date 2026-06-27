import java.util.*;

class DigitX
{
    public int CountDigits (int iNO)
    {
      int iDigit = 0;
      int iCount = 0;
      while (iNO !=0)
      {
        iDigit = iNO %10;
          
      }
      if (iDigit==7)
      {
       iCount++;
      }
       iNO = iNO/10;
       return  iCount;
    }
   
}

public class Program85
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
