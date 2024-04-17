using Laba5_prog;

    Tariff tariff0 = new Tariff(2m);
    InternetOperator internetOperator = new InternetOperator(tariff0);

    Tariff tariff1 = new Tariff(0.05m);
    internetOperator.addTariffToContainer(tariff1);

    Tariff tariff2 = new Tariff(0.03m);
    internetOperator.addTariffToContainer(tariff2);
    
    Customer customer1 = new Customer(tariff1, 100,"Artem");
    internetOperator.addCustomerToContainer(customer1);

    Customer customer2 = new Customer(tariff2, 200,"Misha");
    internetOperator.addCustomerToContainer(customer2);

    decimal totalBillings = internetOperator.CalculateFullBillings();
    Console.WriteLine($"Total billings: {totalBillings}");

    int customerIndex = internetOperator.FindCustomerWithBiggestBilling();
    Console.WriteLine($"Customer with the biggest billing: {internetOperator.CustomerContainer[customerIndex].Name} : {internetOperator.CustomerContainer[customerIndex].CustomerTarrif.TariffCost * internetOperator.CustomerContainer[customerIndex].CustomerTraffic}");
    
    customer1.CustomerTarrif.TariffCost = 0.06m;

    totalBillings = internetOperator.CalculateFullBillings();
    Console.WriteLine($"Updated total billings: {totalBillings}");

    customer2.CustomerTraffic = 1000;

    totalBillings = internetOperator.CalculateFullBillings();
    Console.WriteLine($"Updated total billings: {totalBillings}");
    customer1.mood = Customer.CustomerMood.Happy;
    Console.WriteLine(customer1.mood);

