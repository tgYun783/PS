#include <bits/stdc++.h>
using namespace std;
//모든 노드를 탐색하면서 가장 긴 그래프탐색 길이를 찾는 문제
int BFS(pair<int,int> start , vector<vector<int>>M)
{
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    int len = -1;
    queue<pair<int,int>> bfs_queue;
    bfs_queue.push(start);
    M[start.first][start.second] = 1;

    while(!bfs_queue.empty())
    {
        auto node = bfs_queue.front();
        bfs_queue.pop();
        len = max(len,M[node.first][node.second]);
        for(int i=0; i<4; i++)
        {
            int tx = node.first + dx[i];
            int ty = node.second + dy[i];
            if(M[tx][ty] == 0)
            {
                M[tx][ty] = M[node.first][node.second] + 1;
                bfs_queue.push(make_pair(tx,ty));
            }
        }
    }
    return len-1;
    
}
int solution(vector<vector<int>>M, queue<pair<int,int>> Q)
{
    int max_len = -1;
    while(!Q.empty())
    {
        auto node = Q.front();
        Q.pop();
        int len = BFS(node,M);
        max_len = max(len, max_len);
    }
    return max_len;
}
int main()
{
    int x, y;
    cin >> x >> y;
    vector<vector<int>>M(x+2,vector<int>(y+2,-1));
    queue<pair<int,int>> Q;
    for(int i=1; i<x+1; i++)
        for(int j=1; j<y+1; j++)
        {
            char t;
            cin >> t;
            if(t == 'L')
            {
                M[i][j] = 0;
                Q.push(make_pair(i,j));
            }
        }
    
    cout << solution(M,Q);
    
}