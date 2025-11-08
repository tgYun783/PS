#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int> v(n+1,INT_MAX - 10);
    v[0] = 0;
    int coins[2] = {2, 5};
    for (auto coin : coins) {
        for (int i = coin; i <=n; i ++) {
            v[i] = min(v[i], v[i - coin] + 1);
        }
    }
    if (v[n] == INT_MAX - 10) {
        cout<<"-1";
        return 0;
    }
    cout<<v[n];
    return 0;
}