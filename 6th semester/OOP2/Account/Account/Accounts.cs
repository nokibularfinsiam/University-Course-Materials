using System;
namespace Account
{
    internal class Account
    {
        private string accName,accId, branchName;
        private int balance;

        public string AccName
        {
            set
            {
                accName = value;
            }

            get
            {
                return accName;
            }
        }
        public string AccId
        {
            set
            {
                accId = value;
            }

            get
            {
                return accId;
            }
        }   

        public int Balance
        {
            set
            {
                balance = value;
            }

            get
            {
                return balance;
            }
        }

        public string BranceName
        {
            set
            {
                branchName = value;
            }

            get
            {
                return branchName;
            }
        }
        public Account()
        {
            this.accName = "";
            this.accId = "";
            this.balance = 0;
            this.branchName = "";
        }

        public Account(string accName, string accId, int balance, string branchName)
        {
            this.accName = accName;
            this.accId = accId;
            this.balance = balance;
            this.branchName = branchName;
        }

        public void Deposit(int amount)
        {
            Console.WriteLine(amount);
        }

        public void Withdraw(int amount)
        {
            Console.WriteLine(amount);
        }

        public void Showbalance()
        {
            Console.WriteLine("Show Balance:"+this.balance);
        }
    }
}