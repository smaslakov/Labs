namespace laba4;

public class TariffContainer
{
    private List<Tariff> tariffs;

    public TariffContainer()
    {
        tariffs = new List<Tariff>();
    }

    public void AddTariff(Tariff tariff)
    {
        tariffs.Add(tariff);
    }

    public void RemoveTariff(Tariff tariff)
    {
        tariffs.Remove(tariff);
    }

    public decimal CalculateTotalRevenue()
    {
        decimal totalRevenue = 0.0m;
        foreach (Tariff tariff in tariffs)
        {
            totalRevenue += tariff.TariffCost * tariff.SubscriberCount;
        }
        return totalRevenue;
    }
}