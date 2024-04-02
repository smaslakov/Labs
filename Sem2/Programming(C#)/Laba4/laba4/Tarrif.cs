namespace laba4;
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

    public int SubscriberCount
    {
        get { return subscriberCount; }
        set { subscriberCount = value; }
    }

    public void AddSubscriber(int num)
    {
        subscriberCount += num;
    }

    public void RemoveSubscriber(int num)
    {
        if (subscriberCount > 0)
        {
            subscriberCount -= num;
        }
    }
}