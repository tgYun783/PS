#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int>V(n);
  for(int i=0; i<n; i++)
    cin >> V[i];
  sort(V.begin(), V.end());
  
  int ans = 2e9 +1;
  int left = 0;
  int right = n-1;

  int ans1;
  int ans2;
  while(right > left)
  {
    long long mid = V[left] + V[right];

    if(abs(mid) < ans)
    {
      ans = abs(mid);
      ans1 = left;
      ans2 = right;
    }

    if(mid >=0)
      right--;
    else
      left++;

  }
  cout << V[ans1] << " " << V[ans2];


}