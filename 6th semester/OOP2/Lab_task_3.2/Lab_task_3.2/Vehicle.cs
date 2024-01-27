using System;
namespace Lab_task_3._2
{
    class Vehicle
    {
        private string vehicleName, vehicleId;
        public static int vehicleCount;

        public string VehicleName
        {
            set
            {
                vehicleName = value;
            }

            get
            {
                return vehicleName;
            }
        }

        public string VehicleId
        {
            set
            {
                vehicleId = value;
            }

            get
            {
                return vehicleId;
            }
        }

        public Vehicle()
        {
            this.vehicleName = " ";
            this.vehicleId = " ";
            vehicleCount++;
        }

        public virtual void status()
        {
            Console.WriteLine("------------Vehicle Information------------");
        }

        public void showInfo()
        {
            Console.WriteLine("Vehicle Name:" + this.VehicleName);
            Console.WriteLine("Vehicle id:" + this.VehicleId);
        }
    }
}