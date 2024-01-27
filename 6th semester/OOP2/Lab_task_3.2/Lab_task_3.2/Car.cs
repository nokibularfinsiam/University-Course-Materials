using System;
namespace Lab_task_3._2
{
    class Car : Vehicle
    {
        public Car()
        {
            base.VehicleName = " BMW";
            base.VehicleId = " 33-221";
        }
        public override void status()
        {
            Console.WriteLine("Car Name:" + base.VehicleName);
            Console.WriteLine("Car id:" + base.VehicleId);
        }
    }
}