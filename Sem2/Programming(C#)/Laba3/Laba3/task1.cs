namespace Laba3;

internal class Task1
{
    public static short swap_digits(short a)
    {
        bool negative = false;
        if (a < 0)
        {
            negative = true;
            a = Math.Abs(a);
        }

        if (a < 10 || a > 99)
        {
            if (negative)
            {
                return (short)-a;
            }
            else
            {
                return a;
            }
        }
        short numone = (short)(a / 10);
        short numtwo = (short)(a % 10);
        short newa = (short)(numtwo * 10 + numone);
        if (negative)
        {
            return (short)-newa;
        }
        else
        {
            return newa;
        }
    }
}