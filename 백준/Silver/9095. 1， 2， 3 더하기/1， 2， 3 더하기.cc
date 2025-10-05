#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> v(12);
    v[1] = 1;
    v[2] = 2;
    v[3] = 4;
    for (int i = 4; i <= 11; i++)
    {
        v[i] = v[i - 1] + v[i - 2] + v[i - 3];
    }

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, ans;
        cin >> n;

        ans = v[n];
        cout << ans << '\n';
    }
}
