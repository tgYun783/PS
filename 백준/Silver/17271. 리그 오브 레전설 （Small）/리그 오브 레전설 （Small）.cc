#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define MOD 1'000'000'007
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  
  int n, m;
  cin >> n >> m;
  vector<int>v(n+1);
  v[0] = 1;
  for(int i = 1; i<=n; i++) {
    if(i < m) {
      v[i] = v[i-1];
    }
    else
      v[i] = (v[i-1] + v[i-m]) % MOD;
  }

  cout << v[n];

}