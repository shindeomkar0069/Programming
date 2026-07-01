/*
*
*       *
*               *
*                       *
*                               *
*                                       *
*                                               *
*       *       *       *       *       *       *       *



*/

import java.util.*;

class Pattern
{
    public void Display(int iRow,int iCol)
    {
       int i = 0;
       int j = 0;
      
       for(i=1;i<=iRow;i++)
       {
        for(j=1;j<=i;j++)
        {
            if(i==j||i==iRow||j==1)
         {
            System.out.print("*\t");
         }
         else
         {
            System.out.print("\t");
         }
        }
        System.out.println();
       
    }
    }

}

class Program229
{
  public static void main(String A[] )
  {
    Scanner sobj = new Scanner(System.in);
    int iValue1=0,iValue2=0;

    System.out.println("Enter Number of Rows");
    iValue1=sobj.nextInt();

    System.out.println("Enter Number of Columns");
    iValue2=sobj.nextInt();

    Pattern pobj = new Pattern();
    pobj.Display(iValue1, iValue2);
  }  
}