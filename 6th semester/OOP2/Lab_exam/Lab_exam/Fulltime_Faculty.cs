using System;
namespace Lab_exam
{
    internal class Fulltine_Faculty:Faculty
    {
        private string nextIncrementDate;
        public string NextIncrementDate
        {
            set
            {
                nextIncrementDate = value;
            }

            get
            {
                return nextIncrementDate;
            }
        }

        public Fulltine_Faculty()
        {
            base.FacultyId = "";
            base.JoiningDate = "";
            base.Salary = 0;
            this.nextIncrementDate = "";
        }
        public Fulltine_Faculty(string nextIncrementDate)
        {
            base.FacultyId = FacultyId;
            base.JoiningDate = JoiningDate;
            base.Salary = Salary;
            this.nextIncrementDate = nextIncrementDate;

        }

        public void FacultyStatus()
        {
            Console.WriteLine(base.FacultyId);
            Console.WriteLine(base.JoiningDate);
            Console.WriteLine(base.Salary);
            Console.WriteLine(this.nextIncrementDate);
        }

        public override void ShowDetails()
        {
            Console.WriteLine();
        }

    }
}