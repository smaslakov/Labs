namespace Laba8_prog;

class Program
{
    static void Main(string[] args)
    {
        Operator internetOperator = new Operator();

        IServiceCostCalculator discountCalculator = new FixedDiscountServiceCostCalculator(10);
        Client client1 = new Client("John", discountCalculator);

        IServiceCostCalculator defaultCalculator = new DefaultServiceCostCalculator();
        Client client2 = new Client("Jane", defaultCalculator);

        internetOperator.AddClient(client1);
        internetOperator.AddClient(client2);

        decimal usage = 100;
        decimal totalCost = internetOperator.CalculateTotalCost(usage);

        Console.WriteLine($"Total cost for all clients: {totalCost}");
    }
}