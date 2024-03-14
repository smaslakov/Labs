
using Laba3.Services;
using Laba3;
using static Laba3.DateService;
using static Laba3.CheckInput;
bool isFinished = false;
while (!isFinished)
{
    Console.WriteLine("Select task:");
    Console.WriteLine("1. Task 1");
    Console.WriteLine("2. Task 2");
    Console.WriteLine("3. Task 3");
    Console.WriteLine("4. Quit");
    string menu = Console.ReadLine();
    bool isOk = Checkmenu(menu);
    if (!isOk)
    {
        Console.WriteLine("Wrong Input");
        continue;
    }
    short choice = Convert.ToInt16(menu);
    
    switch (choice)
    {
        case 1:
            Console.WriteLine("Enter number");
            short a;
            string task1 = Console.ReadLine();
            bool isOkfortask1 = Checkmenu(task1);
            if (!isOkfortask1)
            {
                Console.WriteLine("Wrong Input");
                break;
            }
            a = Convert.ToInt16(task1);
            a = Task1.swap_digits(a);
            Console.WriteLine("Fixed number");
            Console.WriteLine(a);
            break;
        case 2:
            Console.WriteLine("Enter z:");
            double z;
            string task2z = Console.ReadLine();
            bool isOkfortask2z = Checktask2(task2z);
            if (!isOkfortask2z)
            {
                Console.WriteLine("Wrong Input");
                break;
            }
            z = Convert.ToDouble(task2z);
            Console.WriteLine("Enter b:");
            double b;
            string task2b = Console.ReadLine();
            bool isOkfortask2b = Checktask2(task2b);
            if (!isOkfortask2b)
            {
                Console.WriteLine("Wrong Input");
                break;
            }
            b = Convert.ToDouble(task2b);
            double answer = Task2.solvethefunc(z, b);
            Console.WriteLine("Answer:");
            Console.WriteLine(answer);
            break;
        case 3:
            short func_num;
            Console.WriteLine("If u want to know day of week enter 1.If u want to know interval between dates enter 2");
            string menutask3 = Console.ReadLine();
            bool isOk30 = Checkmenu(menutask3);
            if (!isOk30)
            {
                Console.WriteLine("Wrong Input");
                continue;
            }
            func_num = Convert.ToInt16(menutask3);

            switch (func_num)
            {
                case 1:
                    Console.WriteLine("Enter date. Example: year-month-day");
                    string task3 = Console.ReadLine();
                    
                    bool isOkfortask3 = Checktask3(task3);
                    if (!isOkfortask3)
                    {
                        Console.WriteLine("Wrong date");
                        break;
                    }
                    
                    Console.WriteLine(GetDay(task3));
                    break;

                case 2:
                    Console.WriteLine("Enter date. Example: year-month-day");
                    DateTime date2;
                    string task32 = Console.ReadLine();
                    bool isOkfortask32 = Checktask3(task32);
                    if (!isOkfortask32)
                    {
                        Console.WriteLine("Wrong date");
                        break;
                    }
                    date2 = Convert.ToDateTime(task32);
                    Console.Write("Interval: ");
                    Console.WriteLine(GetDaySpan(date2.Day, date2.Month, date2.Year));
                    break;

                default:
                    Console.WriteLine("Wrong input");
                    break;
            }
            break;
        case 4:
            isFinished = true;
            break;
        default:  
            Console.WriteLine("Wrong input");
            break;
    }
}