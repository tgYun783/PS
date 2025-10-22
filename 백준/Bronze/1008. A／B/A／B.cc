#include <iostream>
using namespace std;
int main()
{
    cout << fixed;
    cout.precision(9);
    int a, b;
    cin >> a >> b;
    double result = (double)a / b;
    cout << result << '\n';
}