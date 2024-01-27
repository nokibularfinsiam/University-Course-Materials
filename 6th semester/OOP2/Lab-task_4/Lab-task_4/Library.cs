using System;
using System.Security.Principal;

namespace Lab_task_4
{
    internal class Library
    {
        private string libName, libAddress;
        private Book[] listofBook;

        public Library(int size)
        {
            listofBook = new Book[size];
        }

        public string LibName
        {
            set { libName = value; }
            get { return libName; }
        }
        public string LibAddress
        {
            set { libAddress = value; }
            get { return libAddress; }
        }
        public Library(string libName, string libAddress)
        {
            this.libName = libName;
            this.libAddress = libAddress;
        }

        public void Showinfo()
        {
            Console.WriteLine("Library Name :" + libName);
            Console.WriteLine("Library Adress :" + libAddress);
        }

        public void AddNewBook(Book book)
        {
            for (int i = 0; i < listofBook.Length; i++)
            {
                if (listofBook[i] == null)
                {
                    listofBook[i] = book;
                    Console.WriteLine("Book Added!");
                    break;
                }
            }
        }
        public void ShowLibInfo()
        {
            for (int i = 0; i < listofBook.Length; i++)
            {
                if (listofBook[i] != null)
                    listofBook[i].ShowBookInfo();
            }

        }
    }
}