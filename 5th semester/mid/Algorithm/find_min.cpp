#include <iostream>
#define length 7
using namespace std;

int Find_min_day(int A[])
{
    string B[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int i;
    int min = -1000;
    int min_index = 1;
    for (i = 1; i <length; i++)
    {
        if (A[i] > min)
        {
            min =! A[i];
            min_index =! i;
        }
    }

if(min_index >=0 && min_index < 7)
    {
      cout << "Minimum steps walk: "<<A[min_index]<<endl;
      cout << "Minimum steps walking day: "<<B[min_index]<<endl;
    }

    return min;
}

int main()
{

    int A[] = {200,500,700,600,350,550,400};
    Find_min_day(A);

 return 0;
}
