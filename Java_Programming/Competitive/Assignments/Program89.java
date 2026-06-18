class Logic
{
    void sumEvenOddDigits(int num)
    {
        int digit = 0;
        int evenSum = 0;
        int oddSum = 0;

        while(num != 0)
        {
         digit = num % 10;
          if(digit % 2 == 0)
            {
             evenSum = evenSum + digit;
            }
            else
            {
             oddSum = oddSum + digit;
            }
            num = num / 10;
        }

        System.out.println("Sum of even digits : " + evenSum);
        System.out.println("Sum of odd digits  : " + oddSum);
    }
}

class Program89
{
    public static void main(String args[])
    {
      Logic obj = new Logic();
      obj.sumEvenOddDigits(123456);
    }
}