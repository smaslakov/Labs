namespace Laba9_prog;

public class Truck : Car, ICargoTransport
{
    public Truck(string model, ITransmission transmission)
        : base(model, "Truck", transmission)
    {
    }

    public override void GetInfo()
    {
        Console.WriteLine($"Truck Model: {model}");
    }

    public void TransportCargo()
    {
        Console.WriteLine("Transporting cargo in a truck.");
    }
}