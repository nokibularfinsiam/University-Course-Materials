using System;
namespace _21_44793_1
{
    internal class Faculty
    {
        private string name, id;
        private int age;
        private string address;

        public string Name
        {
            set { name = value; }
            get { return name ; }
        }

        public string Id
        {
            set { id = value; }
            get { return id; }
        }

        public int Age
        {
            set { age = value; }
            get { return age; }
        }

        public string Address
        {
            set { address = value; }
            get { return address; }
        }
        public Faculty()
        {
            this.name = "";
            this.id = "";
            this.age = 0;
            this.address = "";
        }
        public Faculty(string name, string id, int age, string address)
        {
            this.name = name;
            this.id = id;
            this.age = age;
            this.address = address;
        }

        public void ShowFacultyInfo()
        {
            Console.WriteLine("Faculty Name:" + this.name);
            Console.WriteLine("Faculty ID:" + this.id);
            Console.WriteLine("Faculty Age:" + this.age);
            Console.WriteLine("Faculty Address:" + this.address);
        }
    }
}