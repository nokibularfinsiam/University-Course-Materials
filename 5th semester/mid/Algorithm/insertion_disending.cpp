#include <iostream>
#define length 7
using namespace std;

void Insertion_Sort(int A[])
{
    int i, j, key;
    for (j = 2; j < length; j++)
    {
        key = A[j];
        i = j - 1;
        while (i >= 0 && A[i] < key)
        {
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = key;
    }
}

void print(int A[])
{
    int i;
    for (i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
}

int main()
{
    int A[] = {200,500,700,600,350,550,400};
    Insertion_Sort(A);
    print(A);

    return 0;
}
