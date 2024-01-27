using System;
using System.Security.Cryptography.X509Certificates;

namespace Lab_task_3._1
{
    class Book
    {
        private string bookName, bookAuthor , bookId, bookType;
        private int bookCopy;
        static int bookCounter = 0;
        private int bookcopy;

        public string BookName
        {
            set
            {
                bookName = value;
            }

            get
            {
                return bookName;
            }
        }

        public string BookAuthor
        {
            set
            {
                bookAuthor = value;
            }

            get
            {
                return bookAuthor;
            }
        }

        public string BookId
        {
            set
            {
                bookId = value;
            }

            get
            {
                return bookId;
            }
        }

        public string BookType

        {
            set
            {
                bookType = value;
            }

            get
            {
                return bookType;
            }
        }

        public int BookCopy
        {
            set
            {
                bookCopy = value;
            }

            get
            {
                return bookCopy;
            }
        }

        public Book()
        {
            this.bookName = " ";
            this.bookAuthor = " ";
            this.bookId = " ";
            this.bookType = " ";
            this.bookCopy = 0;
            bookCounter++;
        }
        public Book(string bookName, string bookAuthor, string bookId, string bookType, int bookCopy)
        {
            this.bookName = bookName;
            this.bookAuthor = bookAuthor;
            this.bookId = bookId;
            this.bookType = bookType;
            this.bookCopy = bookCopy;
            bookCounter++;
        }

        public void showInfo()
        {
            Console.WriteLine("Book Name: " + this.bookName);
            Console.WriteLine("Book Author: " +this.bookAuthor);
            Console.WriteLine("Book Id: " + this.bookId);
            Console.WriteLine("Book type: " + this.bookType);
            Console.WriteLine("Book Copy: " + this.bookCopy);
        }

       public void addBookCopy(int x)
        {
            bookcopy += x;
            bookCounter +=x;
            Console.WriteLine("Adds book: " + bookCounter);
        }

    }
}