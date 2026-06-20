import java.util.*;

class DigitX
{
    public int ReverseNumber (int iNO)
    {
      int iDigit = 0;
      int iRev = 0;
      while (iNO !=0)
      {
        iDigit = iNO %10;
        iRev= (iRev*10 )+ iDigit;
        iNO = iNO/10;
       
    }
    return  iRev;
}
}

public class Program92
{  
   public static void main(String A [] )
   {
     Scanner sobj = new Scanner(System.in);
     DigitX dobj = new DigitX();
     int iValue = 0;
     int iRet =0;

     System.out.println("Enter Number :");

     iValue = sobj.nextInt();
     iRet=dobj.ReverseNumber(iValue);
     System.out.println("Reverse Number is :"+iRet);
   }                       
}
