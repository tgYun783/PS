#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> dag(n+1);
    vector<int> indegree(n+1,0);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        dag[u].push_back(v);
        indegree[v]++;
    }
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }
    while (!q.empty()) {
        int u = q.front();
        cout << u << " ";
        q.pop();
        for (int v : dag[u]) {
            indegree[v]--;
            if (indegree[v] == 0) {
                q.push(v);
            }
        }
    }
}