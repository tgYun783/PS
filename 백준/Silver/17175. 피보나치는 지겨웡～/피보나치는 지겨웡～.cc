#include<bits/stdc++.h>
using namespace std;
constexpr int MOD = 1'000'000'007;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n+1);
    v[0] = v[1] = 1;
    for (int i = 2; i <= n; i++)
        v[i] = ((v[i - 1] + v[i - 2]) % MOD + 1) % MOD;
    cout << v[n] << '\n';

}