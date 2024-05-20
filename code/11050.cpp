#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n <= 1)
        return 1;
    int result = n * factorial(n - 1);
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int result = factorial(n) / (factorial(n - k) * factorial(k));
    cout << result;
}