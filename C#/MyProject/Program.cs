using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter Your Name : ");
        string name = Console.ReadLine();

        Console.WriteLine("Hello "+name);

        Calculator c1 = new Calculator();
        c1.Calcu();
    }
}
