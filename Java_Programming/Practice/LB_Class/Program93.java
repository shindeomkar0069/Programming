import java.util.*;

class DigitX
{
    public boolean CheckPallindrome (int iNO)
    {
      int iDigit = 0;
      int iRev = 0;
      int iTemp=0;

      iTemp = iNO;

      while (iNO !=0)
      {
        iDigit = iNO %10;
        iRev= (iRev*10 )+ iDigit;
        iNO = iNO/10;
       
    }
    if(iRev == iTemp)
    {
        return true;
    }
    else
    {
       return false;
    }
}
}

public class Program93
{  
   public static void main(String A [] )
   {
     Scanner sobj = new Scanner(System.in);
     DigitX dobj = new DigitX();
     int iValue = 0;
     boolean bRet = false;

     System.out.println("Enter Number :");

     iValue = sobj.nextInt();
     bRet=dobj.CheckPallindrome(iValue);
     if(bRet == true)
        {
              System.out.println("Number is Pallindrome");

        }
      else
        {
            System.out.println("Number is not Pallindrome");
        }
   }                       
}
