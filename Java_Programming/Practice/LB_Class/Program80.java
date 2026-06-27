import java.util.*;

class DigitX
{
    public void DisplayDigits(int iNO)
    {
     
      while (iNO !=0)
      {
    
        System.out.println( iNO %10);
        iNO = iNO/10;
      }
       
    }
}

public class Program80
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
