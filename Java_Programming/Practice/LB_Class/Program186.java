//input : 5
//output : A    2   C  4   E 
//         1    2   3  4  5     
import java.util.*;

public class Program186
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';

        for(iCnt = 1,ch = 'A'; iCnt <= iNo; iCnt++, ch++)
        { 
            if(iCnt%2 == 0)
            {
                System.out.print("*\t");
            }
            else{
            System.out.print(ch+"\t");
            }
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