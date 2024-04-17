
namespace Laba5_prog;

public class InternetOperator
{
    public List<Tariff> TariffContainer;
    public List<Customer> CustomerContainer;
    public InternetOperator(Tariff tariff)
    {
        TariffContainer = new List<Tariff>();
        CustomerContainer = new List<Customer>();
        TariffContainer.Add(tariff);
    }
    
    public void addTariffToContainer(Tariff tariff)
    {
        TariffContainer.Add(tariff);
    }

    public void addCustomerToContainer(Customer customer)
    {
        CustomerContainer.Add(customer);
    }

    public decimal CalculateFullBillings()
    {
        decimal sum = 0;
        
        foreach (var c in CustomerContainer)
        {
            sum += c.CustomerTraffic * c.CustomerTarrif.TariffCost;
        }

        return sum;
    }

    public int FindCustomerWithBiggestBilling()
    {
        decimal max = 0;
        int index = 0;
        for (int i = 0; i < CustomerContainer.Count; i++)
        {
            if (CustomerContainer[i].CustomerTarrif.TariffCost * CustomerContainer[i].CustomerTraffic < max) continue;
            max = CustomerContainer[i].CustomerTarrif.TariffCost * CustomerContainer[i].CustomerTraffic;
            index = i;
        }
        
        return index;
    }
    
}