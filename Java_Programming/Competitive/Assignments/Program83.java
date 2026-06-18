class Logic
{
    void findMax(int a, int b)
    {
     if(a > b)
        {
        System.out.println("Maximum = " + a);
        }
        else
        {
        System.out.println("Maximum = " + b);
        }
    }
}

class Program83
{
    public static void main(String args[])
    {
      Logic obj = new Logic();
      obj.findMax(20, 15);
    }
}