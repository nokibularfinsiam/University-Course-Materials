using System;
namespace Lab_task_3._2
{
    class Motorbike: Vehicle
    {
        public Motorbike()
        {
            base.VehicleName = " Royal Enfield";
            base.VehicleId = " 33ff";
        }

        public override void status()
        {
            Console.WriteLine("Motorbike Name:" + base.VehicleName);
            Console.WriteLine("Motorbike id:" + base.VehicleId);
        }
    }
}