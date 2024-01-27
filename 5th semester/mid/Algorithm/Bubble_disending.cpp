#include <iostream>
#define length 7
using namespace std;

void bubbleSort(int A[])
{

      bool swapped = true;
      int j = 0;
      int tmp;

      while (swapped)
      {
            swapped = false;
            j++;

            for (int  = 0; i < length - j; i++)
            {
                  if (A[i] < A[i + 1])
                   {
                        tmp = A[i];
                        A[i] = A[i + 1];
                        A[i + 1] = tmp;
                        swapped = true;
                  }
            }
      }
}
void print(int A[])
{
    int i;
    for (i = 0; i <length; i++)
    {
        cout << A[i] << " ";
    }
}

int main()
{
    int A[] = {200,500,700,600,350,550,400};
    bubbleSort(A);
    print(A);
    return 0;
}
