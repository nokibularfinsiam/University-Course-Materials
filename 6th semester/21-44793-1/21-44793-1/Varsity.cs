using System;
namespace _21_44793_1
{
    internal class Varsity
    {
        private string name, address;
        Cs_Dept csdept;

        public string Name
        {
            set { name = value; }
            get { return name; }
        }

        public string Address
        {
            set { address = value; }
            get { return address; }
        }

        public Varsity(string name, string address)
        {
            this.name = name;
            this.address = address;
        }

        public void PrintVarsityInfo()
        {
            Console.WriteLine(" University Name :" +this.name);
            Console.WriteLine(" Univeersity Address :" +this.address);
        }

        public void printCSDeptInfo()
        {

            csdept.showDeptInfo();
        }
    }
}