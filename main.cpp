#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    int max_size = 0;//최대 크기기
    int count = 0; //연결요소
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    cin >> n >> m;

    vector<vector<int>> V(n+2,vector<int>(m+2));
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin >> V[i][j];
    
    vector<vector<int>>graph(n*m+1);

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
        {
            for(int t=0; t<4; t++)
            {
                int di = i+dx[t];
                int dj = j+dy[t];
                if(V[i][j] == 1 && V[di][dj] == 1)
                {
                    int u = (i-1)*m + j;
                    int v = (di-1)*m + dj;
                    graph[u].push_back(v);
                    graph[v].push_back(u);
                }
            }
        }
    
    unordered_set<int> un_visited;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
        {
            if(V[i][j] == 1)
            {
                un_visited.insert((i-1)*m + j);
            }
        }
    
    while(!un_visited.empty())
    {
        int start = *(un_visited.begin());
        queue<int>Q;
        Q.push(start);
        un_visited.erase(start);
        count++;
        int size =0;
        while(!Q.empty())
        {
            int node = Q.front();
            Q.pop();
            size++;
            for(int i=0; i<graph[node].size(); i++)
            {
                auto it = un_visited.find(graph[node][i]);
                if(it != un_visited.end())
                {
                    Q.push(graph[node][i]);
                    un_visited.erase(it);
                }
            }
        }
        max_size = max(max_size,size);
        
    }
    
    cout << count << "\n" << max_size;
}