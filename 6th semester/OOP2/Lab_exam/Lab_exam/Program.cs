using System;
namespace Lab_exam
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Person P1 = new Fulltime_Faculty("Nyme Ahmed", "25");
            ((Faculty)P1).PersonStatus();
            ((Fulltine_Faculty)P1).FacultyStatus();
            ((Fulltine_Faculty)P1).ShowDetails();
            Console.WriteLine();
        }
    }
}