#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> T(n);
  for(int i=0; i<n; i++)
    cin >> T[i];
  
  long long left = 1;
  long long right = 1e18;
  long long ans = right;

  while(right >= left)
  {
    long long mid = (left + right) / 2;
    long long count = 0;
    for(auto it = T.begin(); it != T.end(); it++)
    {
      count += mid / *it;
      if( count >= m)
        break;
    }

    if( count >= m)
    {
      ans = mid;
      right = mid -1;
    }
    else
      left = mid + 1;
  }
  cout << ans;

}