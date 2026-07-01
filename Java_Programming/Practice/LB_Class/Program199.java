/*
iRow = 4
iCol=4
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/
import java.util.*;

class Patern
{
    public void Display(int iRow,int iCol)
    {
       int i = 0;
       int j = 0;

       for(i=1; i<=iRow;i++)
       {
        for(j=1;j<=iCol;j++)
        {
            System.out.print(j+"\t");
        }System.out.println();
       }

    }

}

class Program199
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
