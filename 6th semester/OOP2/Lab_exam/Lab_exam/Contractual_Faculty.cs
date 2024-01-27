using System;
namespace Lab_exam
{
    internal class Contractual_Faculty:Faculty
    {
        private string duration;
        public string Duration
        {
            set
            {
                duration = value;
            }

            get
            {
                return duration;
            }
        }

        public Contractual_Faculty()
        {
            this.duration = "";
        }
        public Contractual_Faculty(string nextIncrementDate)
        {
            this.duration = nextIncrementDate;

        }

        public void FacultyStatus()
        {
            Console.WriteLine();
        }

        public override void ShowDetails()
        {
            Console.WriteLine(this.FacultyId);
            Console.WriteLine(this.JoiningDate);
            Console.WriteLine(this.Salary);
        }
    }
}