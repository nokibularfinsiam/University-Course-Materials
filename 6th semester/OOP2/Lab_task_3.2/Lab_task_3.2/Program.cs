using System;
namespace Lab_task_3._2
{
    class Program
    {
        static void Main(string[] args)
        {
            Vehicle obj1 = new Vehicle();
            Vehicle obj2 = new Motorbike();
            Vehicle obj3 = new Truck();
            Vehicle obj4 = new Car();
            Vehicle obj5 = new Saloon();
            Vehicle obj6 = new MPV("fgjbf", "fjgfjg");
            obj1.status();
            obj2.status();
            obj3.status();
            obj4.status();
            obj5.status();
            obj6.status();

        }
    }
}