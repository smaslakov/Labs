namespace Laba9_prog;
public class Program
{
    public static void Main()
    {
        var carCollection = new List<Car>();

        // Создаем фабрики для различных типов автомобилей
        var sedanFactory = new SedanFactory();
        var truckFactory = new TruckFactory();
        var suvFactory = new SUVFactory();

        // Создаем автомобили и добавляем их в коллекцию
        carCollection.Add(sedanFactory.CreateCar("Toyota Camry"));
        carCollection.Add(truckFactory.CreateCar("Volvo FH"));
        carCollection.Add(suvFactory.CreateCar("Range Rover"));
        
        foreach (var car in carCollection)
        {
            car.GetInfo();
            car.ChangeGear();
            
            if (car is IPassengerTransport passengerTransport)
            {
                passengerTransport.TransportPassengers();
            }

            if (car is ICargoTransport cargoTransport)
            {
                cargoTransport.TransportCargo();
            }
        }
    }
}