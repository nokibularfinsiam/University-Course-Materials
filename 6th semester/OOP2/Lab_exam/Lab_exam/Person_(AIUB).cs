using System;
namespace Lab_exam
{
    internal class Person
    {
        private string name, address;
        private int age;

        public string Name
        {
            set
            {
                name = value;
            }

            get
            {
                return name;
            }
        }

        public int Age
        {
            set
            {
                age = value;
            }

            get
            {
                return age;
            }
        }

        public string Address
        {
            set
            {
                address = value;
            }

            get
            {
                return address;
            }
        }

        public Person()
        {
            this.name = "";
            this.age = 0;
            this.address = "";
        }

        public virtual void PersonStatus()
        {
            Console.WriteLine(this.name);
            Console.WriteLine(this.age);
            Console.WriteLine(this.address);
        }
    }
}