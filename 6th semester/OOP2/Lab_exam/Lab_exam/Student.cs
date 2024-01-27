using System;
using System.Net;
using System.Xml.Linq;

namespace Lab_exam
{
    internal class Student:Person
    {
        private string studentId;
        private double cgpa;
        private int creditComplete;

        public string StudentId
        {
            set
            {
                studentId = value;
            }

            get
            {
                return studentId;
            }
        }

        public double Cgpa
        {
            set
            {
                cgpa = value;
            }

            get
            {
                return cgpa;
            }
        }

        public int CreditComplete
        {
            set
            {
                creditComplete = value;
            }

            get
            {
                return creditComplete;
            }
        }

        public Student()
        {
            this.studentId = "";
            this.creditComplete = 0;
            this.cgpa = 0;
        }

        public Student(string studentId, double cgpa, int creditComplete)
        {
            this.studentId = studentId;
            this.creditComplete = creditComplete;
            this.cgpa = cgpa;
        }

        public virtual void StudentStatus()
        {
            Console.WriteLine(this.studentId);
            Console.WriteLine(this.cgpa);
            Console.WriteLine(this.creditComplete);
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