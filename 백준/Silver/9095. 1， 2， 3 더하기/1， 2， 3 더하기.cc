#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<vector<int>> v(12, vector<int>(4));
    v[1][1] = 1;
    v[2][1] = 1;
    v[2][2] = 1;
    v[3][1] = 2;
    v[3][2] = 1;
    v[3][3] = 1;
    for (int i = 4; i <= 11; i++)
    {
        v[i][1] = v[i - 1][1] + v[i - 1][2] + v[i - 1][3];
        v[i][2] = v[i - 2][1] + v[i - 2][2] + v[i - 2][3];
        v[i][3] = v[i - 3][1] + v[i - 3][2] + v[i - 3][3];
    }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, ans;
        cin >> n;

        ans = v[n][1] + v[n][2] + v[n][3];
        cout << ans << '\n';
    }
}
