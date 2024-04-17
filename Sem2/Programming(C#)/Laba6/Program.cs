namespace Laba6prog
{
    class Program
    {
        static void Main(string[] args)
        {
            PassengerCar passengerCar = new PassengerCar("Toyota", "Camry", 2022, 5, "Sedan");
            CargoTruck cargoTruck = new CargoTruck("Volvo", "FH16", -2021, 40, "Dump Truck");

            passengerCar.DisplayInformation();
            Console.WriteLine();
            cargoTruck.DisplayInformation();
        }
    }
}
