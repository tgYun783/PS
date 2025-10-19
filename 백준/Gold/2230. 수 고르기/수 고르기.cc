#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    int min_diff = INT_MAX;
    for (int i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int left = 0, right = 0;
    while (right < n && left <= right) {
        int left_num = v[left];
        int right_num = v[right];
        int diff = right_num - left_num;
        if (diff >= m) {
            min_diff = min(min_diff, diff);
            left++;
        }
        else
            right++;

    }
    cout << min_diff;
}