namespace Laba9_prog;

public class SedanFactory : ICarFactory
{
    public Car CreateCar(string model)
    {
        return new Sedan(model, new ManualTransmission());
    }
}