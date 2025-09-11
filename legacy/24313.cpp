#include <iostream>
using namespace std;

int main()
{
    int a, b, c, n;

    cin >> a >> b;
    cin >> c;
    cin >> n;
    if (c < a)
        cout << 0;
    else if (n * a + b > c * n)
        cout << 0;
    else
        cout << 1;
}