using System;
using System.Runtime.CompilerServices;

namespace Lab_task_3._1
{
    class Course
    {
        private string courseName, courseCode;
        private int courseCredit;

        public string CourseName
        {
            set 
            { 
                courseName = value; 
            }

            get
            {
                return courseName;
            }
        }

        public string CourseCode
        {
            set
            {
                courseCode = value;
            }

            get
            {
                return courseCode;
            }
        }

        public int CourseCredit
        {
            set
            {
                courseCredit = value;
            }

            get
            {
                return courseCredit;
            }
        }
        public Course()
        {
            this.courseName = " ";
            this.courseCode = " ";
            this.courseCredit = 0 ;
        }

        public Course(string courseName, string courseCode, int courseCredit)
        {
            this.courseName = courseName;
            this.courseCode = courseCode;
            this.courseCredit = courseCredit;
        }
        public void showCourseInfo()
        {
            Console.WriteLine("Course Name:" +this.courseName);
            Console.WriteLine("Course Code: " +this.courseCode);
            Console.WriteLine("Course Credit: " +this.courseCredit);
        }

    }
}