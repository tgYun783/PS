#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  
  int n,k;
  cin >> n >> k;
  vector<int>v(n);
  for(int i = 0; i < n; i++ ) {
    cin >> v[i];
  }
  auto start = v[0];
  int cnt = 0;
  for(auto t : v) {
    if(t == v[0]) continue;
    if(t <= start + k) continue;
    else {
      cnt++;
      start = t;
    }
  }
  cnt++;
  cout << cnt;
}