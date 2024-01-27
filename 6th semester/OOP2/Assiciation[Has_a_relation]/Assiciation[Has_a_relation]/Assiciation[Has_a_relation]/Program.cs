namespace Assiciation_Has_a_relation_
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Address add1 = new Address("21/C", "C", "Banani");
            string address = add1.Getaddress();
            Console.WriteLine(address);
            Console.WriteLine();

            Account acc1 = new Account(1, "Rakib", 1200, add1);
            acc1.PrintAccountDetails();
            Console.WriteLine();

            Account acc2 = new Account(2, "Siam", 1500, new Address("22/D", "D", "Gulshan"));

            Bank bank = new Bank(4);
            bank.AddAccount(acc1);
            bank.AddAccount(acc2);

            bank.PrintAllAccount();
        }
    }
}