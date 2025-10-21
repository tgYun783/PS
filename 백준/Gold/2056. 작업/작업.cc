#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<int>> adj(n+1);
    vector<int> req_time(n+1);
    vector<int> indegree(n+1);
    vector<int> dp(n+1);
    for(int i=1;i<=n;i++) {
        cin >> req_time[i];
        int t;
        cin >> t;
        for(int j=1;j<=t;j++) {
            int k;
            cin>> k;
            adj[k].push_back(i);
            indegree[i]++;
        }
    }
    queue<int> q;
    for(int i=1;i<=n;i++) {
        if (indegree[i] == 0) {
            q.push(i);
            dp[i] = req_time[i];
        }
    }
    while(!q.empty()) {
        int prev = q.front();
        int prev_time = dp[prev];
        q.pop();
        for(int now:adj[prev]) {
            indegree[now]--;
            if(indegree[now] == 0) {
                q.push(now);
            }
            dp[now] = max(dp[now], prev_time + req_time[now]);
        }
    }
    int max_time = 0;
    for(int i=1;i<=n;i++) {
        max_time = max(max_time, dp[i]);
    }
    cout << max_time << '\n';
}