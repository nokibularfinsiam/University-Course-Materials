using System;
namespace Lab_task_4
{
    internal class Book
    {
        private string bookName, bookAuthor, bookId, bookType;

        public string BookName
        {
            set { bookName = value; }
            get { return bookName; }
        }
        public string BookAuthor
        {
            set { bookAuthor = value; }
            get { return bookAuthor; }
        }
        public string BookId
        {
            set { bookId = value; }
            get { return bookId; }
        }
        public string BookType
        {
            set { bookType = value; }
            get { return bookType; }
        }

        public Book(string bookName, string bookAuthor, string bookId, string bookType)
        {
            this.bookName = bookName;
            this.bookAuthor = bookAuthor;
            this.bookId = bookId;
            this.bookType = bookType;
        }
        public string ShowBookInfo()
        {
            return "BookName: " + this.bookName + ", Book Author: " + this.bookAuthor + ", Book Type: " + this.bookType;

        }
    }
}