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
            Console.WriteLine("Enter x");
            int x;
            string input = Console.ReadLine();
            bool isnum1 = int.TryParse(input, out x);
            if (!isnum1)
            {
                Console.WriteLine("Wrong input");
                break;
            }
            Console.WriteLine("Enter y");
            int y;
            string input2 = Console.ReadLine();
            bool isnum2 = int.TryParse(input2, out y);
            if (!isnum2)
            {
                Console.WriteLine("Wrong input");
                break;
            }
            if (x > 40 || x < -40 || y > 40 || y < -40)
            {
                Console.WriteLine("In the zone");
                break;
            }
            if ((x == 40 || x == -40) && y <= 40 && y >= -40)
            {
                Console.WriteLine("On the side");
                break;
            }
            if ((y == 40 || y == -40) && x <= 40 && x >= -40)
            {
                Console.WriteLine("On the side");
                break;
            }
            else
            {
                Console.WriteLine("Outside the zone");
                break;
            }
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