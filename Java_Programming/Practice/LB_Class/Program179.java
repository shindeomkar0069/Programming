//input : 5
//output : a b c d e 
import java.util.*;

public class Program179
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = 'a';

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print(ch);
            ch++;
        }
        System.out.println();
        
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number of elements:");
        iValue = sobj.nextInt();

        Display(iValue);
    }
}