#include <iostream>
#include <algorithm>
using namespace std;
int dp[1000001] = {
    0,
    0,
    1,
    1,
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 4; i <= n; i++)
    {
        if (i % 3 == 0 && i % 2 == 0)
            dp[i] = min({dp[i - 1], dp[i / 3], dp[i / 2]}) + 1;
        else if (i % 3 == 0)
            dp[i] = min(dp[i - 1], dp[i / 3]) + 1;
        else if (i % 2 == 0)
        {
            dp[i] = min(dp[i - 1], dp[i / 2]) + 1;
        }
        else
            dp[i] = dp[i - 1] + 1;
    }
    cout << dp[n];
}