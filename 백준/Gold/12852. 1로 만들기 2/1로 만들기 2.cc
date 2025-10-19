#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(1e6 + 1);
    vector<int> prev(1e6 + 1);

    for (int i=2; i<=n; i++) {
        v[i] = v[i-1] + 1;
        prev[i] = i-1;
        if (i % 2 == 0 && v[i/2] + 1 < v[i]) {
            v[i] = v[i/2] + 1;
            prev[i] = i/2;
        }
        if (i % 3 == 0 && v[i/3] + 1 < v[i]) {
            v[i] = v[i/3] + 1;
            prev[i] = i/3;
        }
    }

    cout << v[n] << '\n';
    int ans = n;
    while (ans != 0) {
        cout << ans << ' ';
        ans = prev[ans];
    }

}
