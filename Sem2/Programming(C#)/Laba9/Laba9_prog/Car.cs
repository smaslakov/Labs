namespace Laba9_prog;

using System;

public abstract class Car
{
    protected string model;
    protected string type;
    protected ITransmission transmission;

    protected Car(string model, string type, ITransmission transmission)
    {
        this.model = model;
        this.type = type;
        this.transmission = transmission;
    }

    public abstract void GetInfo();
    public void ChangeGear()
    {
        transmission.ChangeGear();
    }
}