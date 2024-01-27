namespace Assiciation_Has_a_relation_
{
    internal class Account
    {
        private int accNum;
        private string accName;
        private double balance;
        private Address add; //association [Account has address]
        public Account(int a,string b,double c, Address d)
        {
            this.accNum = a;
            this.accName = b;
            this.balance = c;
            this.add = d;
        }
        public int AccNum
        {
            set { accNum = value; }
            get { return accNum; }
        }
        public string AccName
        {
            set { accName = value; }
            get { return accName; }
        }
        public double Balance
        {
            set { balance = value; }
            get { return balance; }
        }
        public Address Add
        {
            set { add = value; }
            get { return add; }
        }
        public void PrintAccountDetails()
        {
            Console.WriteLine("Account num: " + this.AccNum);
            Console.WriteLine("Account name: " + this.AccName);
            Console.WriteLine("Balance: "+this.Balance);
            Console.WriteLine(this.Add.Getaddress());
        }
    }
}