using System;
namespace Lab_task_3._2
{
    class Saloon : Vehicle
    {
        public Saloon()
        {
            base.VehicleName = " Sedon";
            base.VehicleId = " 33-4444";
        }
        public override void status()
        {
            Console.WriteLine("Saloon Name:" + base.VehicleName);
            Console.WriteLine("Saloon id:" + base.VehicleId);
        }
    }
}