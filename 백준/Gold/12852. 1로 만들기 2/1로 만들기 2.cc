#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(1e6 + 1);
    vector<int> prev(1e6 + 1);

    for (int i=2; i<=n; i++) {
        if (i%2 ==0 && i%3 ==0) {
            v[i] = min(v[i/2], min(v[i/3], v[i-1]));
            if (v[i] == v[i/2])
                prev[i] = i/2;
            else if (v[i] == v[i/3])
                prev[i] = i/3;
            else
                prev[i] = i-1;
        }
        else if (i%2 ==0) {
            v[i] = min(v[i/2], v[i-1]);
            prev[i] = (v[i/2] < v[i-1]) ? i/2 : i-1;
        }
        else if (i%3 ==0) {
            v[i] = min(v[i/3], v[i-1]);
            prev[i] = (v[i/3] < v[i-1]) ? i/3 : i-1;
        }
        else {
            v[i] = v[i-1];
            prev[i] = i-1;
        }
        v[i]++;
    }

    cout << v[n] << '\n';
    int ans = n;
    while (ans != 0) {
        cout << ans << ' ';
        ans = prev[ans];
    }

}
