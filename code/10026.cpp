#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, +1, -1};

    cin >> n;
    vector<vector<char>> V(n+2,vector<char>(n+2));
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            V[i][j] = 'Z';
    
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin >> V[i][j];
    

    vector<vector<int>> normal(n*n+1); //일반인
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
        {
            for(int t=0; t<4; t++)
            {
                int ni = i + dx[t];
                int nj = j + dy[t];
              if(V[ni][nj] == V[i][j])
              {
                int u = (i-1)*n + j;
                int v = (ni-1)*n + nj;
                normal[u].push_back(v);
                normal[v].push_back(u);
              }
            }
        }
    
    vector<vector<int>> abnormal(n*n+1); //적록색맹
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
        {
            for(int t=0; t<4; t++)
            {
                int ni = i + dx[t];
                int nj = j + dy[t];
              if(V[ni][nj] == V[i][j] || (V[ni][nj] == 'G' && V[i][j] == 'R') || (V[ni][nj] == 'R' && V[i][j] == 'G'))
              {
                int u = (i-1)*n + j;
                int v = (ni-1)*n + nj;
                abnormal[u].push_back(v);
                abnormal[v].push_back(u);
              }
            }
        }

    
    //BFS
    unordered_set<int> un_visited;
    for(int i = 1; i <=n*n; i++)
    {
        un_visited.insert(i);
    }
    int normal_count = 0; //연결요소 개수
    while(!un_visited.empty())
    {
        int start = *(un_visited.begin());
        un_visited.erase(un_visited.begin());

        queue<int>Q;

        normal_count ++;

        Q.push(start);

        while(!Q.empty())
        {
            int node = Q.front();
            Q.pop();
            for(int i=0; i<normal[node].size(); i++)
            {
                auto it = un_visited.find(normal[node][i]);
                if(it != un_visited.end())
                {
                    Q.push(normal[node][i]);
                    un_visited.erase(it);
                }
            }
        }
    }

    un_visited.clear();
    for(int i = 1; i <=n*n; i++)
    {
        un_visited.insert(i);
    }
    int abnormal_count = 0; //연결요소 개수
    while(!un_visited.empty())
    {
        int start = *(un_visited.begin());
        un_visited.erase(un_visited.begin());

        queue<int>Q;

        abnormal_count ++;

        Q.push(start);

        while(!Q.empty())
        {
            int node = Q.front();
            Q.pop();
            for(int i=0; i<abnormal[node].size(); i++)
            {
                auto it = un_visited.find(abnormal[node][i]);
                if(it != un_visited.end())
                {
                    Q.push(abnormal[node][i]);
                    un_visited.erase(it);
                }
            }
        }
    }
    cout << normal_count << " " << abnormal_count;

}