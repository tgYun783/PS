#include <iostream>
using namespace std;
long long cash[1000001]{
    0,
    1,
    2,
};

long long tile(int n)
{
    if (n <= 2)
        return cash[n];
    for (int i = 3; i <= n; i++)
        cash[i] = (cash[i - 1] + cash[i - 2]) % 15746;
    return cash[n];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    cout << tile(n);
}