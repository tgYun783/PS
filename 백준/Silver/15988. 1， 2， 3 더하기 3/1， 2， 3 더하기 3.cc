#include <bits/stdc++.h>
using namespace std;
constexpr int mod = 1000000009;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >> t;
    for ( int i = 0; i < t; ++i ) {
        int n;
        cin >> n;
        vector<int> v(1000001);
        v[1] = 1;
        v[2] = 2;
        v[3] = 4;
        for( int i = 4; i <= n; ++i ) {
            v[i] = ((v[i-1] + v[i-2])%mod + v[i-3])%mod;;
        }
        cout << v[n] << '\n';
    }
}