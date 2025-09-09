#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>V;
vector<int>visited;
vector<int>arr;


void bt(int k)
{
  if(k == m)
  {
    for(auto it = arr.begin(); it !=arr.end(); it++)
    {
      cout << *it << " ";
    }
    cout << "\n";
    return;
  }

  for(int i=0; i<n; i++)
  {
    if(visited[i] == 0)
    {
    visited[i] = 1;
    arr[k] = V[i];
    bt(k+1);
    visited[i] = 0;
    }
  }
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> m;
  V = vector<int>(n);
  visited = vector<int>(n);
  arr = vector<int>(m);
  for(int i=0; i<n; i++)
    cin >> V[i];
  
  sort(V.begin(),V.end());
  
  bt(0);
  
}