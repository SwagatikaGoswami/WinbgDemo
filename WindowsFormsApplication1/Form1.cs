using SampleAtlProjectLib;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        class Test1
        {
            /// <summary>
            /// Some variable
            /// </summary>
            public int a;

            /// <summary>
            /// Default constructer
            /// </summary>

           public Test1()
            {
            }
            /// <summary>
            /// Test function to crash
            /// </summary>
            public void CrashMe()
            {
                throw new Exception("I just crashed");
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Test1 obj = new Test1();
            obj.CrashMe();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            IAtlSimpleObject atlObject = new AtlSimpleObjectClass();
            IFilter someInterface = atlObject as IFilter;
            //Using the interface without checking if the object impliments it. We now that it is not implimented, hence it will crash
            tagSTAT_CHUNK tag;
            someInterface.GetChunk(out tag);
        }
    }
}
