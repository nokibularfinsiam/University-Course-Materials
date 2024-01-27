using System.Net;

namespace Lab_task_3._1
{
    class Contact
    {
        private string personName, personID, mobileNumber;
        private int age;
        private char gender;

        public string PersonName
        {
            set
            {
                personName = value;
            }

            get
            {
                return personName;
            }
        }

        public string PersonID

        {
            set
            {
                personID = value;
            }

            get
            {
                return personID;
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

        public string MobileNumber

        {
            set
            {
                mobileNumber = value;
            }

            get
            {
                return mobileNumber;
            }
        }

        public char Gender
        {
            set
            {
                gender = value;
            }

            get
            {
                return gender;
            }
        }

        public Contact()
        {
            this.personName = " ";
            this.PersonID = " ";
            this.age = 0;
            this.mobileNumber = " ";
            this.gender = 'M';
        }

        public Contact( string personName, string personID, int age, string mobileNumber,char gender)
        {
            this.personName = personName;
            this.PersonID = personID;
            this.age = age;
            this.mobileNumber = mobileNumber;
            this.gender = gender;
        }

        public void showPersonInfo()
        {
            Console.WriteLine("Person Name: "+this.personName);
            Console.WriteLine("Person ID: "+this.personID);
            Console.WriteLine("Age: "+this.age);
            Console.WriteLine("Mobile Number: "+this.mobileNumber);
            Console.WriteLine("Gende: "+this.gender);
        }

      public void detectMobileOperator()
        {

            char Num1, Num2;
            int number1 = 7;
            int number2 = 8;
            char.TryParse(number1.ToString(), out Num1);
            char.TryParse(number2.ToString(), out Num2);

            if (this.mobileNumber[2] == Num1)
            {
                Console.WriteLine("Mobile Operator: Gp");
            }
            else if (this.mobileNumber[2] == Num2)
            {
                Console.WriteLine("Mobile Operator: Robi");
            }
        }
    }
}