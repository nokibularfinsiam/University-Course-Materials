using Microsoft.VisualBasic;
using System;
namespace Lab_task2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a=2, b=2;
            int[,] array1 = { { 1, 2 }, { 3, 5 } };
            int[,] array2 = { { 2, 3 }, { 3, 4 } };
            int[,] array3 = { { 4, 5 }, { 3, 6 } };
        
             array2[a,b] = array1[a,b] * array2[a,b];
             array3[a,b] = array2[a,b] * array3[a,b];

            Console.WriteLine(array3);
        }


    }
}