namespace Laba9_prog;

using System;

public class ManualTransmission : ITransmission
{
    public void ChangeGear()
    {
        Console.WriteLine("Changing gear manually.");
    }
}
