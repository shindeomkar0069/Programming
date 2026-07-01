/*
iRow = 4
iCol=4
 A B C D
 A B C D
 A B C D
 A B C D
*/
import java.util.*;

class Patern
{
    public void Display(int iRow,int iCol)
    {
       int i = 0;
       int j = 0;
       char ch = '\0';
       for(i=1; i<=iRow;i++)
       {
        for(j=1,ch = 97;j<=iCol;j++,ch++)
        {
          System.out.print(ch+"\t");
        }System.out.println();
       }

    }

}

class Program205
{
  public static void main(String A[] )
  {
    Scanner sobj = new Scanner(System.in);
    int iValue1=0,iValue2=0;

    System.out.println("Enter Number of Rows");
    iValue1=sobj.nextInt();

    System.out.println("Enter Number of Columns");
    iValue2=sobj.nextInt();

    Patern pobj = new Patern();
    pobj.Display(iValue1, iValue2);
  }  
}
