//input : 5
//output :  

import java.util.*;

public class Program176
{
    public static void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2==0)
            {
                System.out.print("*\t");

            }
            else
            {
                System.out.print(iCnt+"\t");
            }
        }
        
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