namespace Laba8_prog;
public class FixedDiscountServiceCostCalculator : IServiceCostCalculator
{
    private decimal fixedDiscountPercentage;

    public FixedDiscountServiceCostCalculator(decimal fixedDiscountPercentage)
    {
        this.fixedDiscountPercentage = fixedDiscountPercentage;
    }

    public decimal CalculateCost(decimal usage)
    {
        decimal discountAmount = (usage * fixedDiscountPercentage) / 100;
        return usage - discountAmount;
    }
}