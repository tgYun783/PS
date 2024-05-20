#include <iostream>
using namespace std;

bool checkDec(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        return true;
    else
        return false;
}

int main()
{
    int m, n;
    int sum = 0;
    int smallest;
    cin >> m >> n;

    for (int i = m; i <= n; i++)
    {
        if (checkDec(i))
        {
            if (sum == 0)
                smallest = i;
            sum += i;
        }
    }
    if (sum == 0)
        cout << -1;
    else
        cout << sum << '\n'
             << smallest << endl;
}