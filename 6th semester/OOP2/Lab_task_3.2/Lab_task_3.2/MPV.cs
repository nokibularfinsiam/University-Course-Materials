using System;
namespace Lab_task_3._2
{
    class MPV : Vehicle
    {
        public MPV()
        {
            base.VehicleName = "";
            base.VehicleId = "";
        }

        public MPV(string vehicleName,string vehicleId)
        {
            base.VehicleName = Console.ReadLine();
            base.VehicleId = vehicleId;
        }
        public override void status()
        {
            Console.WriteLine("MPV Name:" + base.VehicleName);
            Console.WriteLine("MPV id:" + base.VehicleId);
        }
    }
}