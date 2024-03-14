bool isFinished = false;

while (!isFinished)
{
    Console.WriteLine("Menu:");
    Console.WriteLine("1. Start");
    Console.WriteLine("2. Quit");

    Console.Write("Select the menu item: ");
    int choice;
    bool isOk = int.TryParse(Console.ReadLine(), out choice);
    if (!isOk)
    {
        Console.WriteLine("Wrong input");
        continue;
    }
    
    switch (choice)
    {
        case 1:
            Console.WriteLine("Enter the Three-digit number.");
            int number;
            string input = Console.ReadLine();
            bool isnum = int.TryParse(input, out number);
            if (!isnum)
            {
                Console.WriteLine("Wrong input");
                break;
            }
            if (Math.Abs(number) < 100 || Math.Abs(number) > 999)
            {
                Console.WriteLine("Wrong input");
                break;
            }
            if (number < 0)
            {
                number = -number; 
            }
            int firstDigit = number / 100; 
            int secondDigit = (number / 10) % 10; 

            if (firstDigit > secondDigit)
            {
                Console.WriteLine("The first digit is greater than the second.");
            }
            else if (firstDigit < secondDigit)
            {
                Console.WriteLine("The second digit is greater than the first.");
            }
            else
            {
                Console.WriteLine("The digits are equal.");
            }
            break;
        case 2:
            isFinished = true;
            break;
        default:
            Console.WriteLine("Wrong input");
            break;
    }

    Console.WriteLine(); 
}

Console.WriteLine("The end.");