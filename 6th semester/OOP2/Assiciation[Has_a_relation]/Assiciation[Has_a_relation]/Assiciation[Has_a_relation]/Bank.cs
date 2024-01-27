namespace Assiciation_Has_a_relation_
{
    internal class Bank
    {
        private Account[] accounts; //Association [Bank has accounts]
        public Bank(int size)
        {
            accounts = new Account[size];
        }
        public void AddAccount(Account acc)
        {
            for(int i = 0; i < accounts.Length; i++)
            {
                if(accounts[i] == null)
                {
                    accounts[i] = acc;
                    Console.WriteLine("Account created!");
                    break;
                }
            }
        }
        public void PrintAllAccount()
        {
            for (int i = 0; i < accounts.Length; i++)
            {
                if (accounts[i] != null)
                    accounts[i].PrintAccountDetails();
            }
        }
    }
}