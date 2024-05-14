namespace Laba8_prog;

public class Client
{
    public string Name { get; set; }
    public IServiceCostCalculator CostCalculator { get; set; }

    public Client(string name, IServiceCostCalculator costCalculator)
    {
        Name = name;
        CostCalculator = costCalculator;
    }
}