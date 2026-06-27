import java.util.*;

class DigitX
{
    public void CountEvenOddDigits (int iNO)
    {
      int iDigit = 0;
      int iCountEven = 0,iCountOdd=0;
      while (iNO !=0)
      {
        iDigit = iNO %10;
          
      
      if (iDigit %2 ==0)
      {
       iCountEven++;
      
      }
      else
      {
        iCountOdd++;
      }
      
       iNO = iNO/10;
       
    }
    System.out.println(" Number of odd digits:"+iCountOdd);
     System.out.println("Number of even digits:"+iCountEven);
 
 
 
}
}

public class Program88
{  
   public static void main(String A [] )
   {
     Scanner sobj = new Scanner(System.in);
     DigitX dobj = new DigitX();
     int iValue = 0;
    

     System.out.println("Enter Number :");

     iValue = sobj.nextInt();
     dobj.CountEvenOddDigits(iValue);
     
   }                       
}
