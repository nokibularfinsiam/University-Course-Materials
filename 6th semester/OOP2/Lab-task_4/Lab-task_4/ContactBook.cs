using System;
namespace Lab_task_4
{
    internal class ContactBook
    {
        private string ownerName, ownerAddress;
        private Contact contact;
        private Contact[] listOfContact;

        public ContactBook(int size)
        {
            listOfContact = new Contact[size];
        }

        public string OwnerName
        {
            set { ownerName = value; }
            get { return ownerName; }
        }

        public string OwnerAddress
        {
            set { ownerAddress = value; }
            get { return ownerAddress; }
        }

        public Contact Contact
        {
            set { contact = value; }
            get { return contact; }
        }

        public ContactBook(string ownerName, string ownerAddress, Contact contact)
        {
            this.ownerName = ownerName;
            this.ownerAddress = ownerAddress;
            this.contact = contact;
        }

        public void AddContact(Contact con)
        {
            Console.WriteLine();
        }

        public void ShowInfo()
        {
            Console.WriteLine(ownerName);
            Console.WriteLine(ownerAddress);
            Console.WriteLine(contact);
        }
    }
}