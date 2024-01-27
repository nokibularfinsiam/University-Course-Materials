using System;
using System.Net;
using System.Xml.Linq;

namespace Lab_exam
{
    internal class Faculty : Person
    {
        private string facultyId, joiningDate;
        private int salary;

        public string FacultyId
        {
            set
            {
                facultyId = value;
            }

            get
            {
                return facultyId;
            }
        }
        public string JoiningDate
        {
            set
            {
                joiningDate = value;
            }

            get
            {
                return joiningDate;
            }
        }
        public int Salary
        {
            set
            {
                salary = value;
            }

            get
            {
                return salary;
            }
        }

        public abstract void FacultyStatus();
        public Faculty()
        {
            this.facultyId = "";
            this.joiningDate = "";
            this.salary = 0;
        }

        public Faculty(string facultyID,string joiningDate,int salary)
        {
            this.facultyId = facultyID;
            this.joiningDate = joiningDate;
            this.salary = salary;
        }

        public void FacultuStatus()
        {
            Console.WriteLine(this.facultyId);
            Console.WriteLine(this.joiningDate);
            Console.WriteLine(this.salary);
        }

        public override void PersonStatus()
        {
            Console.WriteLine(this.Name);
            Console.WriteLine(this.Age);
            Console.WriteLine(this.Address);
        }

        public virtual void ShowDetails()
        {
            Console.WriteLine();
        }
    }
}