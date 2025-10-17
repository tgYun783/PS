#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
vector<vector<int>> v;
vector<bool>visited;
void dfs(int node)
{
    for(auto target : v[node])
    {
        if(visited[target] == false)
        {
            visited[target] = true;
            ans[target] = node;
            dfs(target);
        }
    }
}
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   int n;
   cin >> n;
   v = vector<vector<int>>(n+1);
   visited = vector<bool>(n+1, false);
   visited[1] = true;
   ans = vector<int>(n+1);

   for(int i=0; i<n-1; i++)
   {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
   }

   dfs(1);
   for(int i=2; i<ans.size(); i++)
    cout << ans[i] << '\n';
}