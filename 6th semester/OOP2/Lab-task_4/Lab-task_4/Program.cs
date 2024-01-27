using System;
namespace Lab_task_4
{
    internal class Program
    {
        static void Main(string[] args)
        {

            Contact Con1 = new Contact("Siam",20,"01575267980", 'M');
            Con1.ShowContactInfo();


            Library lib1 = new Library("AIUB BOOK STORE", "Kuratoli");
            Console.WriteLine();
            lib1.Showinfo();


            Book b1 = new Book("Learn C#", "Siam", " zdjfnrj", "Academic");
            b1.ShowBookInfo();
            Console.WriteLine();

            Book b2 = new Book("Learn C#", "Siam", " zdjfnrj", "Academic");

            Library library = new Library(2);
            library.AddNewBook(b1);
            library.AddNewBook(b2);
            library.ShowLibInfo();



        }
    }
}