namespace Laba8_prog;

using System.Collections.Generic;

public class Operator
{
    private List<Client> clients;

    public Operator()
    {
        clients = new List<Client>();
    }

    public void AddClient(Client client)
    {
        clients.Add(client);
    }

    public decimal CalculateTotalCost(decimal usage)
    {
        decimal totalCost = 0;

        foreach (Client client in clients)
        {
            decimal cost = client.CostCalculator.CalculateCost(usage);
            totalCost += cost;
        }

        return totalCost;
    }
}