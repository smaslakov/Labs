namespace Laba3.Services;
public class Task2
{
    public static double solvethefunc(double z, double b)
    {
        double x;
        if (z <= 0)
        {
            Console.WriteLine("Branch one");
            x = Math.Pow(z, b) + Math.Abs(b / 2);
        }
        else
        {
            Console.WriteLine("Branch two");
            x = Math.Sqrt(z);
        }

        double y = 1 / Math.Cos(x) + Math.Log(Math.Abs(Math.Tan(x / 2)));
        return y;
    }
}