#include <bits/stdc++.h>
#include <functional>
#include <limits>
#include <queue>
#include <vector>

using namespace std;


int main()
{
  const int INF = numeric_limits<int>::max();
  int v, e;
  cin >> v >> e;
  vector<vector<pair<int,int>>>graph(v+1);
  vector<int>node(v+1, INF);
  int t; 
  cin >> t;
  node[t] = 0;
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; //weight, node
  for(int i=0; i <e; i++)
  {
    int from, to, weight;
    cin >> from >> to >> weight;
    graph[from].push_back({to,weight});
  }
  
  pq.push({node[t],t});

  while(!pq.empty()) {
    auto [w,n] = pq.top();
    pq.pop();
    if(node[n] < w)
      continue;
    for(auto [d, dw] : graph[n]) {
      int tw = w + dw;
      if(node[d] > tw) {
        node[d] = tw;
        pq.push({tw,d});
      }
    }
  }

  for(int i=1; i<=v; i++) {
    if(node[i] == INF)
      cout << "INF" << '\n';
    else
      cout << node[i] << '\n';
  }


 

}