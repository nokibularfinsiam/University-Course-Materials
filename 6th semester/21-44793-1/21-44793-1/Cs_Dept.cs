using System;
namespace _21_44793_1
{
    internal class Cs_Dept
    {
        private int totalCredit;
        private int creditCost;
        private FulltimeFaculty[] fFaculty;
        private ContractualFaculty[] cFaculty;

        public Cs_Dept(int Size)
        {
            fFaculty = new FulltimeFaculty[100];
            cFaculty = new ContractualFaculty[100];
        }

        public int TotalCredit
        {
            set { totalCredit = value; }
            get { return totalCredit; }
        }

        public int CreditCost
        {
            set { creditCost = value; }
            get { return creditCost; }
        }

        public Cs_Dept(int totalCredit, int creditCost)
        {
            this.totalCredit = totalCredit;
            this.creditCost = creditCost;
        }

        public void showDeptInfo()
        {
            Console.WriteLine("Total Credit :" + this.totalCredit);
            Console.WriteLine(" Credit Cost :" + this.creditCost);
        }

        public void AddFulltimeFaculty(FulltimeFaculty fFacult)
        {
            for (int i = 0; i < fFaculty.Length; i++)
            {
                if (fFaculty[i] == null)
                {
                    fFaculty[i] = fFacult;
                    Console.WriteLine("Faculty Added!");
                    break;
                }
            }
        }

        public  void ShowFulltimeFacultyInfo()
        {
            for (int i = 0; i < fFaculty.Length; i++)
            {
                if (fFaculty[i] != null)
                {
                    fFaculty[i].ShowFulltimeFacultyInfo();
                }
            }
        }

        public void ShowFulltimeFacultyIncomeInfo()
        {
           
        }

        public void AddContractualFaculty(ContractualFaculty cFacult)
        {
            for (int i = 0; i < cFaculty.Length; i++)
            {
                if (cFaculty[i] == null)
                {
                    cFaculty[i] = cFacult;
                    Console.WriteLine("Faculty Added!");
                    break;
                }
            }
        }

        public void ShowContractualFacultyInfo()
        {
            for (int i = 0; i < cFaculty.Length; i++)
            {
                if (cFaculty[i] != null)
                {
                    cFaculty[i].ShowContractualFacultyInfo();

                }
            }
        }

        public void ShowContractualFacultyIncomeInfo()
        {
           
        }
    }
}