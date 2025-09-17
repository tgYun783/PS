#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, s;
  cin >> n >> s;
  vector<int> V(n);

  for(int i=0; i<n; i++)
  {
    cin >> V[i];
  }

  int start_tos = 0;
  int end_tos = 0;
  int sum = V[0];
  int len = INT_MAX;
  while(true)
  {
    
    if(sum >= s)
    {
      len = min(len , end_tos - start_tos + 1);
      
      sum -= V[start_tos];
      start_tos++;

    }
    else
    {
      if(end_tos == n-1)
      {
        break;
      }
      else
      {
        end_tos ++;
        sum += V[end_tos];
      }
    }
    
  }
  if(len == INT_MAX)
  {
    cout << 0;
  }
  else
    cout << len;


}