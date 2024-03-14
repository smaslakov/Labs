namespace Laba3;
static public class CheckInput
{
    static public bool Checkmenu(string num)
    {
        short value;
        if (!short.TryParse(num, out value))
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    static public bool Checktask2(string num)
    {
        double value;
        if (!double.TryParse(num, out value))
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    static public bool Checktask3(string date)
    {
        
        DateTime a;
        if (!DateTime.TryParse(date, out a))
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}