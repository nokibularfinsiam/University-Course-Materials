using System;
namespace Lab_task_4
{
    internal class Contact
    {
        private string personName, mobileNumber;
        private int age;
        private char gender;

        public string PersonName
        {
            set { personName = value; }
            get { return personName; }
        }
        public int Age
        {
            set { age = value; }
            get { return age; }
        }
        public string MobileNumber
        {
            set { mobileNumber = value; }
            get { return mobileNumber; }
        }
        public char Gender
        {
            set { gender = value; }
            get { return gender; }
        }

        public Contact(string personName, int age,string mobileNumber, char gender)
        {
            this.personName = personName;
            this.age = age;
            this.gender = gender;
            this.mobileNumber = mobileNumber;
        }

        public void ShowContactInfo()
        {
            Console.WriteLine("Person Name :"+personName);
            Console.WriteLine("Person Age :" + age);
            Console.WriteLine("Mobile Number :"+mobileNumber);
            Console.WriteLine("Gender :"+gender);
        }
    }
}