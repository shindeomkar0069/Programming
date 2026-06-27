import java.util.*;

class DigitX
{
    public void DisplayDigits(int iNO)
    {
      int iDigit = 0;
      for( ; iNO != 0;)

      {
        iDigit =iNO %10;
        System.out.println(iDigit);
        iNO = iNO/10;
      }
     
       
    }
}

public class Program81
{  
   public static void main(String A [] )
   {
     Scanner sobj = new Scanner(System.in);
     DigitX dobj = new DigitX();
     int iValue = 0;

     System.out.println("Enter Number :");

     iValue = sobj.nextInt();
     dobj.DisplayDigits(iValue);

   }                       
}
 