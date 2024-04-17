namespace Laba6prog;
class PassengerCar : Car
{
    private int SeatCount{ get; set; }
    private string BodyType{ get; set; }

    public PassengerCar(string brand, string model, int year, int seatCount, string bodyType)
        : base(brand, model, year)
    {
        SeatCount = seatCount;
        BodyType = bodyType;
    }

    public override void DisplayInformation()
    {
        Console.WriteLine($"Brand: {Brand}");
        Console.WriteLine($"Model: {Model}");
        Console.WriteLine($"Year: {Year}");
        Console.WriteLine($"Seat Count: {SeatCount}");
        Console.WriteLine($"Body Type: {BodyType}");
    }
}