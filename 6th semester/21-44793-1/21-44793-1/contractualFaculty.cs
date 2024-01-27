using System;
namespace _21_44793_1
{
    internal class ContractualFaculty: Faculty, CFIncome
    {
        private string joiningDate;
        private double salary;
        private int duration;

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

        public int Duration

        {
            set { duration = value; }
            get { return duration; }
        }

        public ContractualFaculty(string joiningDate, double salary, int duration)
        {
            base.Name = Name;
            base.Age = Age;
            base.Address = Address;
            this.joiningDate = joiningDate;
            this.salary = salary;
            this.duration = duration;
        }

        public void ShowContractualFacultyInfo()
        {
            Console.WriteLine("Joining Date :" + this.joiningDate);
            Console.WriteLine("Salary :" + this.salary);
            Console.WriteLine("Duration :" +this.duration);
        }

        public void CFTotalIncome()
        {
            int income = 40000;
            int a = 12;
            int yearlyIncome = a * 40000;
            Console.WriteLine(" Contractual Faculty Yearly Income" + yearlyIncome);
        }
    }
}