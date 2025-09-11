#include <iostream>
using namespace std;

int main()
{
    int test, deCount = 0;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                count++;
        }
        if (count == 2)
            deCount++;
    }
    cout << deCount;
}