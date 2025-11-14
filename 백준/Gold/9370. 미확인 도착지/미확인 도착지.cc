#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <vector>
using namespace std;


const int INF = 200000000;


vector<int> dijkstra(int start, int nodes, const vector<vector<pair<int,int>>>& graph) {
    vector<int> dist(nodes + 1, INF);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    dist[start] = 0;
    pq.push({0, start});

    while(!pq.empty()) {
        int current_dist = pq.top().first;
        int current_node = pq.top().second;
        pq.pop();

        if(current_dist > dist[current_node]) continue;

        for(auto& edge : graph[current_node]) {
            int next_cost = edge.first;
            int next_node = edge.second;

            if(dist[next_node] > current_dist + next_cost) {
                dist[next_node] = current_dist + next_cost;
                pq.push({dist[next_node], next_node});
            }
        }
    }
    return dist;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) { 
        int nodes, relation, dest_count;
        int start, d1, d2;
        cin >> nodes >> relation >> dest_count;
        cin >> start >> d1 >> d2;

       
        int d1_d2_cost = 0; 
        vector<vector<pair<int,int>>> graph(nodes + 1);

        for(int i = 0; i < relation; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            graph[u].push_back({w, v});
            graph[v].push_back({w, u});
            
            if((u == d1 && v == d2) || (u == d2 && v == d1)) {
                d1_d2_cost = w;
            }
        }

        vector<int> dests;
        for(int i = 0; i < dest_count; i++) {
            int d; cin >> d;
            dests.push_back(d);
        }


        vector<int> dist_S = dijkstra(start, nodes, graph);
        vector<int> dist_d1 = dijkstra(d1, nodes, graph);
        vector<int> dist_d2 = dijkstra(d2, nodes, graph);

        vector<int> ans;
        for(int target : dests) {
            int minD = dist_S[target];

            
            if (minD == INF) continue; 

            long long path1 = (long long)dist_S[d1] + d1_d2_cost + dist_d2[target];
            long long path2 = (long long)dist_S[d2] + d1_d2_cost + dist_d1[target];

            if(minD == path1 || minD == path2) {
                ans.push_back(target);
            }
        }

        sort(ans.begin(), ans.end());
        for(int a : ans) cout << a << ' ';
        cout << '\n';
    }
    return 0;
}