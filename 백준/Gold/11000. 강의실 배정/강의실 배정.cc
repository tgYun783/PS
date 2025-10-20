#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, int> p1, pair<int, int> p2) {
    if (p1.first == p2.first) {
        return p1.second < p2.second;
    }
    return p1.first < p2.first;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        int s, t;
        cin >> s >> t;
        v[i] = {s, t};
    }
    sort(v.begin(), v.end(),compare);
    priority_queue<int, vector<int>, greater<>> pq;
    int max_size = -1;
    for (int i = 0; i < n; i++) {
        auto next = v[i];
        if (pq.empty()) {
            pq.push(next.second);
            max_size = max(max_size, (int)pq.size());
        }
        else {
            while (pq.top() <= next.first)
                pq.pop();
            pq.push(next.second);
            max_size = max(max_size, (int)pq.size());
        }
    }
    cout << max_size << endl;
}