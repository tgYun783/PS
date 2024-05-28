#include <iostream>
using namespace std;
long long int fibo(long long int n)
{
    if (n <= 1)
        return n;

    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);

    int n;
    cin >> n;
    cout << fibo(n);
}