using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics.Eventing.Reader;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Front_page
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            string name = "Sayma";
            string pasword = "12345";

            string a = textBox1.Text;
            string b = textBox2.Text;

            if(name ==a && pasword ==b)
            {
                LogIn aa = new LogIn();
                aa.Show();
            }

            else
            {
                MessageBox.Show("Wrong Password");
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Registration bb = new Registration();
            bb.Show();
        }
    }
}
