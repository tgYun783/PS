#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int j = 0; j < n; j++) {
            cin >> v[j];
        }
        long long sum = 0;
        for (int j = 0; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                sum += gcd(v[j], v[k]);
            }
        }
        cout << sum << '\n';
    }

    return 0;
}