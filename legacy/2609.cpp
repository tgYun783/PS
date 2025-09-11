#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int temp;
    if (a > b)
        temp = a;
    else
        temp = b;
    while (1)
    {
        if (a % temp == 0 && b % temp == 0)
            break;
        temp--;
    }
    cout << temp << '\n';
    if (a > b)
        temp = b;
    else
        temp = a;
    int result = 0;
    while (1)
    {
        result += temp;
        if (result % a == 0 && result % b == 0)
            break;
    }
    cout << result << '\n';
}