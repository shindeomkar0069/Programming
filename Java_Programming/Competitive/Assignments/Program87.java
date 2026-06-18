class Logic
{
    void printEvenNumbers(int n)
    {
        int i = 0;

        for(i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                System.out.print(i + "\t");
            }
        }
    }
}

class Program87
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.printEvenNumbers(20);
    }
}