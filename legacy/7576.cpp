#include <bits/stdc++.h>
using namespace std;


int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> V(n+2,vector<int>(m+2));
    queue<pair<int,int>> Q, TempQ;
    int day_count = 0;
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    
    for(int i=0; i<n+2; i++)
        for(int j=0; j<m+2; j++)
            V[i][j] = -1;
    
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
        {
            cin >> V[i][j];
            if(V[i][j] == 1)
            {
                auto p = make_pair(i,j);
                Q.push(p);
            }
        }
    bool is_uniform = true;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            if(V[i][j] == 0)
                is_uniform = false;
    }
    if(is_uniform)
    {
        cout << 0;
        return 0;
    }
    while(!Q.empty())
    {
        day_count++;
        while(!Q.empty())
        {
            auto node = Q.front();
            Q.pop();
            for(int i=0; i<4; i++)
            {
                int nx = node.first+dx[i];
                int ny = node.second+dy[i];
                if(V[nx][ny] == 0)
                {
                    V[nx][ny] = 1;
                    TempQ.push(make_pair(nx,ny));
                }
            }
        }
        while(!TempQ.empty())
        {
            Q.push(TempQ.front());
            TempQ.pop();
        }
    }
    day_count--; //모두 익었을때 한번 더 돌기 때문에;
    is_uniform = true;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            if(V[i][j] == 0)
                is_uniform = false;
    }

    if(is_uniform)
        cout <<day_count;
    else
        cout << -1;

    return 0;


}