using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Labtask_3_final
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {

            string a = textBox1.Text;
            string b = textBox2.Text;
            string c = textBox4.Text;
            string g;
            if(radioButton1.Checked || radioButton2.Checked)
            { }

            if (a != null && b != null && b != null)
            {
                MessageBox.Show("Login successful");
                ShowInfo ab = new ShowInfo(a, b, c,g);
                ab.Show();
            }
            else
            {
                MessageBox.Show("Username/Password error!");
            }
        }

        private void textBox4_TextChanged(object sender, EventArgs e)
        {

        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {

        }
    }
}
