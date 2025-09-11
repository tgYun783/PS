#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c;

    while (1)
    {
        cin >> a >> b >> c;
        if (a == b && b == c && a == 0)
            break;

        if (a >= b && a >= c)
        {
            if (a * a == b * b + c * c)
                cout << "right\n";
            else
                cout << "wrong\n";
        }
        else if (b >= a && b >= c)
        {
            if (b * b == a * a + c * c)
                cout << "right\n";
            else
                cout << "wrong\n";
        }
        else
        {
            if (c * c == a * a + b * b)
                cout << "right\n";
            else
                cout << "wrong\n";
        }
    }
}