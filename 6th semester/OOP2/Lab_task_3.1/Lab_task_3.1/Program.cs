using System;
namespace Lab_task_3._1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Course obj1 = new Course("Object Oriented Programming 2", "CS3303", 3);
            obj1.showCourseInfo();

            Book obj2 = new Book("Learn C#", "-------", "fdsk2887wdb2", " Academic", 1000);
            obj2.showInfo();
            obj2.addBookCopy(500);

            Contact obj3 = new Contact("Nokibul Arfin Siam", "21-44793-1", 20, "01875267980", 'M');
            obj3.showPersonInfo();
            obj3.detectMobileOperator();
            Console.ReadKey();
        }
    }
}