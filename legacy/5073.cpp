#include <iostream>
using namespace std;
bool isTriangle(int a, int b, int c)
{
    if (a >= b && a >= c)
    {

        if (b + c > a)
            return 1;
        else
            return 0;
    }
    else if (b >= a && b >= c)
    {
        if (a + c > b)
            return 1;
        else
            return 0;
    }
    else
    {
        if (a + b > c)
            return 1;
        else
            return 0;
    }
}
int main()
{
    int a, b, c;
    while (1)
    {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;
        if (!isTriangle(a, b, c))
            cout << "Invalid" << '\n';
        else if (a == b && b == c)
            cout << "Equilateral" << '\n';
        else if (a == b || b == c || c == a)
            cout << "Isosceles" << '\n';
        else
            cout << "Scalene" << '\n';
    }
}