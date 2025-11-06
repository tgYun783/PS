#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int>v(n+1);
  v[1] = 1;
  for(int i=2; i<=n; i++) {
    int t = INT_MAX;
    int mNum = 1;
    while(1) {
      if(i - mNum*mNum == 0) {
        t = 0;
        break;
      }
      if(i - mNum*mNum < 0)
        break;
      t = min(t, v[i - mNum*mNum]);
      mNum++;
    }
    v[i] = t+1;
  }
  cout << v[n];

}