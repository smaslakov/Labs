using laba4;
Tariff tariff1 = new Tariff(10.0m);
Tariff tariff2 = new Tariff(15.0m);
Tariff tariff3 = new Tariff(100.0m);
InternetOperator operator1 = new InternetOperator(tariff1);

operator1.TariffContainer.AddTariff(tariff1);
operator1.TariffContainer.AddTariff(tariff2);
operator1.TariffContainer.AddTariff(tariff3);

tariff1.AddSubscriber(1000);
tariff1.AddSubscriber(100);
tariff2.AddSubscriber(10);

decimal totalRevenue = operator1.TariffContainer.CalculateTotalRevenue();
Console.WriteLine("Total Revenue: " + totalRevenue);
    