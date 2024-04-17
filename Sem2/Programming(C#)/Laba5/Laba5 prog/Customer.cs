namespace Laba5_prog;

public class Customer
{
    public enum CustomerMood
    {
        Happy,
        UnHappy
    }

    public CustomerMood mood { get; set; }
    
    public Customer()
    {
        customerTraffic = 0;
    }
    public Customer(Tariff tariff,int traffic,string x)
    {
        name = x;
        customerTraffic = traffic;
        customerTariff = tariff;
    }

    private string name;
    private int customerTraffic;
    private Tariff customerTariff;
    
    public int CustomerTraffic
    {
        get { return customerTraffic; }
        set { customerTraffic = value; }
    }
    public string Name
    {
        get { return name; }
        set { name = value; }
    }
    public Tariff CustomerTarrif
    {
        get { return customerTariff; }
        set { customerTariff = value; }
    }
}