namespace Laba8_prog;

public class DefaultServiceCostCalculator : IServiceCostCalculator
{
    public decimal CalculateCost(decimal usage)
    {
        return usage;
    }
}