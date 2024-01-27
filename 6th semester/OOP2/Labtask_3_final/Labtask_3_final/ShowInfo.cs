using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.ListView;

namespace Labtask_3_final
{
    public partial class ShowInfo : Form
    {
        public ShowInfo()
        {
            InitializeComponent();
        }

        public ShowInfo(string s, string id, string c)
        {
            InitializeComponent();
            string name = s;
            string ID = id;
            string cgpa = c;
            string g = Gender;
            label1.Text = name;
            label2.Text = ID;
            label4.Text = cgpa;
        }

        private void ShowInfo_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (button1 != null)
            {
                label1.Visible = true;
                label2.Visible = true;
                label4.Visible = true;
                label6.Visible = true;
                label5.Visible = true;
                label3.Visible = true;
                label7.Visible = true;
                label8.Visible = true;
            }
            else
            {

                label1.Visible = false;
                label2.Visible = false;
                label4.Visible = false;
                label6.Visible = false;
                label5.Visible = false;
                label3.Visible = false;
                label7.Visible = false;
                label8.Visible = false;
            }
        }
    }
}
