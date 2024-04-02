namespace laba4;

public class InternetOperator
{
    private TariffContainer tariffContainer;

    public InternetOperator(Tariff tariff)
    {
        tariffContainer = new TariffContainer();
        tariff = new Tariff(0);
        tariffContainer.AddTariff(tariff);
    }

    public TariffContainer TariffContainer
    {
        get { return tariffContainer; }
    }
}