#include <iostream>
#define X 1000000000
using namespace std;

int main()
{
    int dp[10]{};
    int tmp[10]{};
    for (int i = 1; i < 10; i++)
        tmp[i] = 1;
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        dp[0] = tmp[1] % X;
        dp[9] = tmp[8] % X;
        for (int j = 1; j < 9; j++)
            dp[j] = (tmp[j - 1] + tmp[j + 1]) % X;
        copy(begin(dp), end(dp), begin(tmp));
    }
    long long sum = 0;
    for (int i = 0; i < 10; i++)
        sum += tmp[i];
    sum %= X;
    cout << sum << '\n';
}