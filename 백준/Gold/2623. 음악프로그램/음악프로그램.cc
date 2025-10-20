#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n+1);
    vector<int>indegree(n+1,0);
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        int prev;
        cin >> prev;
        for (int j =1; j<t; j++) {
            int next;
            cin >> next;
            adj[prev].push_back(next);
            indegree[next]++;
            prev = next;
        }
    }
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }
    vector<int> result;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        result.push_back(u);
        for (int v : adj[u]) {
            indegree[v]--;
            if (indegree[v] == 0) {
                q.push(v);
            }
        }
    }
    if (result.size() == n)
        for (auto r : result) {
            cout << r << "\n";
        }
    else
        cout << 0;
}