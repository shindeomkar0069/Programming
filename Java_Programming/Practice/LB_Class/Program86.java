import java.util.*;

class DigitX
{
    public int CountEvenDigits (int iNO)
    {
      int iDigit = 0;
      int iCount = 0;
      while (iNO !=0)
      {
        iDigit = iNO %10;
          
      
      if (iDigit %2 ==0)
      {
       iCount++;
      }
       iNO = iNO/10;
       
    }
    return  iCount;
}
}

public class Program86
{  
   public static void main(String A [] )
   {
     Scanner sobj = new Scanner(System.in);
     DigitX dobj = new DigitX();
     int iValue = 0;
     int iRet =0;

     System.out.println("Enter Number :");

     iValue = sobj.nextInt();
     iRet=dobj.CountEvenDigits(iValue);
     System.out.println("Number of even Digit  :"+iRet);
   }                       
}
