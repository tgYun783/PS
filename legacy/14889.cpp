#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> S;
int min_gap = INT_MAX;
vector<int> visited;
vector<int> arr;
vector<int> arr2;
int n;
void bt(int k,int start)
{
  if(k == n/2)
  {
    arr2.clear();
    sort(arr.begin(), arr.end());
    auto it = arr.begin();
    for(int i=0; i<n; i++)
    {
      if(it == arr.end() || i != *it)
        arr2.push_back(i);
      else
        it++;
    }
    int arr_sum = 0;
    for(int i=0; i<n/2; i++)
      for(int j=i+1; j<n/2; j++)
        arr_sum += S[arr[i]][arr[j]] + S[arr[j]][arr[i]];

    int arr2_sum = 0;
    for(int i=0; i<n/2; i++)
      for(int j=i+1; j<n/2; j++)
        arr2_sum += S[arr2[i]][arr2[j]] + S[arr2[j]][arr2[i]];

    int gap = abs(arr_sum - arr2_sum);
    min_gap = min(gap,min_gap);
    
    return;
  }

  for(int i=start; i<n; i++)
  {
    if(visited[i] == 0)
    {
      visited[i] = 1;
      arr[k] = i;
      bt(k+1, i);
      visited[i] = 0;
    }
  }
}
int main()
{
  cin >> n;
  S = vector<vector<int>>(n,vector<int>(n));
  visited = vector<int>(n);
  arr = vector<int>(n/2);
  
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
      cin >> S[i][j];
  }
  

  bt(0,0);
  cout << min_gap;
}