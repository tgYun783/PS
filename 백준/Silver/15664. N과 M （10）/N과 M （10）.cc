#include <bits/stdc++.h>
using namespace std;
vector<int>v;
vector<int>ans;
vector<int>visited;
int n, m;
void bt(int t, int start)
{
    if(t == m)
    {
        for(auto val : ans)
            cout << val << ' ';
        cout << '\n';
        return;
    }
    int tmp = 0;
    for(int i=start; i<n; i++)
    {
        if(v[i] != tmp && visited[i] == 0) 
        {
        visited[i] = 1;
        ans.push_back(v[i]);
        tmp = v[i];
        bt(t+1,i);
        ans.pop_back();
        visited[i] = 0;
        }
    }
}
int main()
{
    
    cin >> n >> m;
    v = vector<int>(n);
    visited = vector<int>(n);
    
    for(int i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    bt(0,0);
    

}