namespace Laba9_prog;
public class SUV : Car, IPassengerTransport, ICargoTransport
{
    public SUV(string model, ITransmission transmission)
        : base(model, "SUV", transmission)
    {
    }

    public override void GetInfo()
    {
        Console.WriteLine($"SUV Model: {model}");
    }

    public void TransportPassengers()
    {
        Console.WriteLine("Transporting passengers in an SUV.");
    }

    public void TransportCargo()
    {
        Console.WriteLine("Transporting cargo in an SUV.");
    }
}