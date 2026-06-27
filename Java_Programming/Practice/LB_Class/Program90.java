import java.util.*;

class DigitX
{
    public int SumDigits (int iNO)
    {
      
      int iSum = 0;
      while (iNO !=0)
      {
         
        iSum = iSum+(iNO %10);    
      
      
       iNO = iNO/10;
       
    }
    return  iSum;
}
}

public class Program90
{  
   public static void main(String A [] )
   {
     Scanner sobj = new Scanner(System.in);
     DigitX dobj = new DigitX();
     int iValue = 0;
     int iRet =0;

     System.out.println("Enter Number :");

     iValue = sobj.nextInt();
     iRet=dobj.SumDigits(iValue);
     System.out.println("Summetion of  Digit is  :"+iRet);
   }                       
}
