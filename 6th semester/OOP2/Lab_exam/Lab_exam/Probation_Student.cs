using System;
namespace Lab_exam
{
    internal class Probation_Student:Student
    {
        public Probation_Student(string studentId, double cgpa, int creditComplete)
        {
            base.StudentId = studentId;
            base.CreditComplete = creditComplete;
            base.Cgpa = cgpa;
        }

        public override void StudentStatus()
        {
            Console.WriteLine(this.StudentId);
            Console.WriteLine(this.Cgpa);
            Console.WriteLine(this.CreditComplete);
        }
        public override void ShowDetails()
        {
            Console.WriteLine();
        }
    }
}