class Logic
{
    void checkPrime(int num)
    {
        int i = 0;

        if(num <= 1)
        {
            System.out.println(num + " is not a prime number");
            return;
        }

        for(i = 2; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                System.out.println(num + " is not a prime number");
                return;
            }
        }

        System.out.println(num + " is a prime number");
    }
}

class Program86
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.checkPrime(11);
    }
}