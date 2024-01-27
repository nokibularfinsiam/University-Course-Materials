using System;
namespace Lab_task_3._2
{
    class Truck : Vehicle
    {
        public Truck()
        {
            base.VehicleName = " El Grande";
            base.VehicleId = " 33-3r3";
        }
        public override void status()
        {
            Console.WriteLine("Truck Name:" + base.VehicleName);
            Console.WriteLine("Truck id:" + base.VehicleId);
        }
    }
}