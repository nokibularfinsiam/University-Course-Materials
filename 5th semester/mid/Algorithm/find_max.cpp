#include <iostream>
#define length 7
using namespace std;

int Find_max_day(int A[])
{
  string B[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int i;
    int max = -1000;
    int max_index = -1;
    for (i = 1; i <length; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
            max_index = i;
        }
    }

if(max_index >=0 && max_index < 7)
    {
      cout << "Maximum steps walk: "<<A[max_index]<<endl;
      cout << "Maximum steps walking day: "<<B[max_index]<<endl;
    }

    return max;
}

int main()
{

    int A[] = {200,500,700,600,350,550,400};
    Find_max_day(A);

 return 0;
}
