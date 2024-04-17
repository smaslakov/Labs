namespace Laba5_prog;
public class Tariff
{
    private decimal tariffCost;
    private int subscriberCount;

    public Tariff(decimal cost)
    {
        tariffCost = cost;
        subscriberCount = 0;
    }

    public decimal TariffCost
    {
        get { return tariffCost; }
        set { tariffCost = value; }
    }

    public int UsersCount
    {
        get { return subscriberCount; }
        set { subscriberCount = value; }
    }

    public void AddUsers(int num)
    {
        subscriberCount += num;
    }

    public void RemoveUsers(int num)
    {
        if (subscriberCount > 0)
        {
            subscriberCount -= num;
        }
    }
}