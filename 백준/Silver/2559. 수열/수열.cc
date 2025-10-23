#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> prefix(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    prefix[0] = v[0];
    for (int i = 1; i<n; i++)
        prefix[i] = prefix[i-1] + v[i];

    int m = prefix[k-1];
    int left = 0, right = k;
    while (right < n) {
        int sum = prefix[right] - prefix[left];
        m = max(m, sum);
        right++;
        left++;
    }
    cout << m << endl;




}