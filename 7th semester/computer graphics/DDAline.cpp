#include <iostream>

using namespace std;

int round(float n)
{
    if (n - (int)n < 0.5)
        return (int)n;
    return (int)(n + 1);
}

void DDALine(int x0, int y0, int x1, int y1)
{

    int dx = x1 - x0;
    int dy = y1 - y0;

    int step;

    if (abs(dx) > abs(dy))
        step = abs(dx);
    else
        step = abs(dy);

    float x_incr = (float)dx / step;
    float y_incr = (float)dy / step;

    float x = x0;
    float y = y0;

    for (int i = 0; i < step; i++) {

        cout << round(x) << " " << round(y) << "\n";
        x += x_incr;
        y += y_incr;
    }
}

int main()
{
    int x0,y0, x1, y1;
    cout<< "Enter X0,y0 value:";
    cin>>x0;
    cout<< "Enter y0 value :";
    cin>>y0;
    cout<< "Enter X1 value :";
    cin>>x1;
    cout<< "Enter y1 value :";
    cin>>y1;

    DDALine(x0, y0, x1, y1);
    return 0;
}
