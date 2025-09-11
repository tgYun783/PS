#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;
    cin >> n;
    int temp = n;
    for (i = 1; i < n; i++)
    {
        if (temp <= i)
            break;
        temp -= i;
    }
    if (i % 2 == 0)
        cout << temp << '/' << i - temp + 1 << endl;
    else
        cout << i - temp + 1 << '/' << temp << endl;
}