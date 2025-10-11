#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n;//노드 개수
    cin >> m;//간선 개수
    vector<vector<pair<int,int>>> v(n+1, vector<pair<int,int>>());
    for (int i=0; i<m; i++) {
        int start, end, cost;
        cin >> start >> end >> cost;
        v[start].push_back(make_pair(end, cost));
    }
    int start,end;
    cin >> start >> end;
    vector<int> costs(n+1, INT_MAX);
    costs[start] = 0;
    struct Compare {
        bool operator()(pair<int,int> a, pair<int,int> b) {
            
            return a.second > b.second;
        }
    };
    priority_queue<pair<int,int>, vector<pair<int,int>>, Compare> pq;
    vector<bool> visited(n+1, false);
    pq.push(make_pair(start,costs[start]));

    while (!pq.empty()) {
        pair<int,int> p = pq.top();
        pq.pop();
        if (p.first == end){break;}
        if (visited[p.first]){continue;}
        visited[p.first] = true;

        for (int i=0; i<v[p.first].size(); i++) {
            pair<int,int> e = v[p.first][i];
            costs[e.first] = min(costs[e.first], costs[p.first] + e.second);
            pq.push(make_pair(e.first, costs[e.first]));
        }
    }
    cout << costs[end] << endl;



}