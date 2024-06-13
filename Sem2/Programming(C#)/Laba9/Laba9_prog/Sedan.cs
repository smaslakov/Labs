namespace Laba9_prog;

// Sedan.cs
using System;

public class Sedan : Car, IPassengerTransport
{
    public Sedan(string model, ITransmission transmission)
        : base(model, "Sedan", transmission)
    {
    }

    public override void GetInfo()
    {
        Console.WriteLine($"Sedan Model: {model}");
    }

    public void TransportPassengers()
    {
        Console.WriteLine("Transporting passengers in a sedan.");
    }
}



