using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _21_44793_1
{
    public partial class Form1 : Form
    {
        string show = "";
        string result = " ";

        public Form1()
        {
            InitializeComponent();
        }

        private void button8_Click(object sender, EventArgs e)
        {
           
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void b1_Click(object sender, EventArgs e)
        {
            textBox1.Text = "1";
            this.show = this.show + textBox1.Text;
            textBox1.Text = this.show;
            for (int i = 0; i < 10; i++)
            {
                this.result = this.show + i;
                this.Show();
            }
        }

        private void button7_Click(object sender, EventArgs e)
        {
            textBox1.Text = "2";
            this.show = this.show + textBox1.Text;
            textBox1.Text = this.show;
            for (int i = 0; i < 10; i++)
            {
                this.result = this.show + i;
                this.Show();
            }
        }

        private void b3_Click(object sender, EventArgs e)
        {
            textBox1.Text = "3";
            this.show = this.show + textBox1.Text;
            textBox1.Text = this.show;
            for (int i = 0; i < 10; i++)
            {
                this.result = this.show + i;
                this.Show();
            }
        }

        private void b4_Click(object sender, EventArgs e)
        {
            textBox1.Text = "4";
            this.show = this.show + textBox1.Text;
            textBox1.Text = this.show;
            for (int i = 0; i < 10; i++)
            {
                this.result = this.show + i;
                this.Show();
            }
        }

        private void b5_Click(object sender, EventArgs e)
        {
            textBox1.Text = "5";
            this.show = this.show + textBox1.Text;
            textBox1.Text = this.show;
            for (int i = 0; i < 10; i++)
            {
                this.result = this.show + i;
                this.Show();
            }
        }

        private void b6_Click(object sender, EventArgs e)
        {
            textBox1.Text = "6";
            this.show = this.show + textBox1.Text;
            textBox1.Text = this.show;
            for (int i = 0; i < 10; i++)
            {
                this.result = this.show + i;
                this.Show();
            }
        }

        private void b7_Click(object sender, EventArgs e)
        {
            textBox1.Text = "7";
            this.show = this.show + textBox1.Text;
            textBox1.Text = this.show;
            for (int i = 0; i < 10; i++)
            {
                this.result = this.show + i;
                this.Show();
            }
        }

        private void b8_Click(object sender, EventArgs e)
        {
            textBox1.Text = "8";
            this.show = this.show + textBox1.Text;
            textBox1.Text = this.show;
            for (int i = 0; i < 10; i++)
            {
                this.result = this.show + i;
                this.Show();
            }
        }

        private void b9_Click(object sender, EventArgs e)
        {
            textBox1.Text = "9";
            this.show = this.show + textBox1.Text;
            textBox1.Text = this.show;
            for (int i = 0; i < 10; i++)
            {
                this.result = this.show + i;
                this.Show();
            }
        }

        private void button9_Click(object sender, EventArgs e)
        {
            textBox1.Text = "0";
            this.show = this.show + textBox1.Text;
            textBox1.Text = this.show;
            for (int i = 0; i < 10; i++)
            {
                this.result = this.show + i;
                this.Show();
            }
        }

        private void textBox1_TextChanged_1(object sender, EventArgs e)
        {
            
        }

        private void button15_Click(object sender, EventArgs e)
        {
            if(textBox1 != null)
            {
                textBox1.Text = null;
            }
        }

        private void button12_Click(object sender, EventArgs e)
        {
          
        }

        private void button11_Click(object sender, EventArgs e)
        {
           
        }

        private void button16_Click(object sender, EventArgs e)
        {

        }
    }
}
