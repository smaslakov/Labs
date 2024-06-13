namespace Laba9_prog;

public class SUVFactory : ICarFactory
{
    public Car CreateCar(string model)
    {
        return new SUV(model, new AutomaticTransmission());
    }
}