#include <iostream>
using namespace std;
long long int zton(long long int n)
{
    long long int result = 0;
    for (long long int i = 0; i < n - 2; i++)
    {
        result += (n - 1 - i) * (n - 2 - i) / 2;
    }
    return result;
}
int main()
{
    long long int n, count = 0;
    cin >> n;
    count = zton(n);
    cout << count << '\n'
         << 3;
}