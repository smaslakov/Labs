namespace Laba9_prog;

public class TruckFactory : ICarFactory
{
    public Car CreateCar(string model)
    {
        return new Truck(model, new AutomaticTransmission());
    }
}