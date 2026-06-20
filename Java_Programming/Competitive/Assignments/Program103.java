class Logic
{
    void displayFactors(int num)
    {
        for(int i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                System.out.print(i + " ");
            }
        }
    }
}

class Program103
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.displayFactors(12);
    }
}