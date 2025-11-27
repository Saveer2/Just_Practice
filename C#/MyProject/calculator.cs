using System;

class Calculator
{
    public void Calcu()
    {
        string repeat;
        
        do
        {
            Console.WriteLine("** \tCALCULATOR **");
            Console.WriteLine("\nEnter 1st Number : ");
            double a = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Enter 2nd Number : ");
            double b = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Enter Operation (1/2/3/4) : \n1. ADD\n2. SUB\n3. MULTI\n4. DIV");
            int choice = Convert.ToInt32(Console.ReadLine());

            switch (choice)
            {
                case 1:
                    Console.WriteLine("Sum = "+(a+b));
                    break;
                case 2:
                    Console.WriteLine("Sum = "+(a-b));
                    break;
                case 3:
                    Console.WriteLine("Multiplication : "+(a*b));
                    break;
                case 4:
                    if (b != 0)
                    {
                        Console.WriteLine("Division = "+(a/b));
                    }
                    else
                    {
                        Console.WriteLine("Division Not Possible!!");
                    }
                    break;
                default:
                    Console.WriteLine("Invalid Choice!!");
                    break;
            }

            Console.Write("\nDo you want to continue? (y/n): ");
            repeat = Console.ReadLine();

        }while(repeat.ToLower() == "y");
    }
}