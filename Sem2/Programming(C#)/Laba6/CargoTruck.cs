namespace Laba6prog;
class CargoTruck : Car
{
    private double PayloadCapacity{ get; set; }
    private string BodyType{ get; set; }

    public CargoTruck(string brand, string model, int year, double payloadCapacity, string bodyType)
        : base(brand, model, year)
    {
        PayloadCapacity = payloadCapacity;
        BodyType = bodyType;
    }

    public override void DisplayInformation()
    {
        Console.WriteLine($"Brand: {Brand}");
        Console.WriteLine($"Model: {Model}");
        Console.WriteLine($"Year: {Year}");
        Console.WriteLine($"Payload Capacity: {PayloadCapacity} tons");
        Console.WriteLine($"Body Type: {BodyType}");
    }
}