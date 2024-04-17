namespace Laba6prog;

abstract class Car
{
    protected string Brand { get; set; }
    protected string Model{ get; set; }
    protected int Year{ get; set; }

    public Car(string brand, string model, int year)
    {
        Brand = brand;
        Model = model;
        Year = year;
    }

    public abstract void DisplayInformation();
}