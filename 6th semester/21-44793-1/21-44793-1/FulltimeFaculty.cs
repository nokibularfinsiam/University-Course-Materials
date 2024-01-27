using System;
using System.Net;

namespace _21_44793_1
{
    internal class FulltimeFaculty : Faculty, FFIncome
    {
        private string joiningDate;
        private double salary;

        public string JoiningDate
        {
            set { joiningDate = value; }
            get { return joiningDate; }
        }

        public double Salary
        {
            set { salary = value; }
            get { return salary; }
        }

        public FulltimeFaculty(string joiningDate, double salary)
        {
            base.Name = Name;
            base.Age = Age;
            base.Address = Address;
            this.joiningDate = joiningDate;
            this.salary = salary;
        }


        public  void ShowFulltimeFacultyInfo()
        {
            Console.WriteLine("Joining Date :" +this.joiningDate);
            Console.WriteLine("Salary :" + this.salary);
        }

        public void FFYearlyIncome()
        {
            int income = 50000;
            int a = 12;
            int yearlyIncome = a * 50000;
            Console.WriteLine(" Fulltime Faculty Yearly Income" + yearlyIncome);
        }
    }
}