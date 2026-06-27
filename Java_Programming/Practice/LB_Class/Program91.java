import java.util.*;

class DigitX
{
    public int SumEvenDigits (int iNO)
    {
      int iDigit = 0;
      int iSum = 0;
      while (iNO !=0)
      {
        iDigit = iNO %10;
     if(iDigit %2 == 0)
     {
        iSum = iSum+iDigit;    
     }
      
       iNO = iNO/10;
       
    }
    return  iSum;
}
}

public class Program91
{  
   public static void main(String A [] )
   {
     Scanner sobj = new Scanner(System.in);
     DigitX dobj = new DigitX();
     int iValue = 0;
     int iRet =0;

     System.out.println("Enter Number :");

     iValue = sobj.nextInt();
     iRet=dobj.SumEvenDigits(iValue);
     System.out.println("Summetion of Even Digit is  :"+iRet);
   }                       
}
