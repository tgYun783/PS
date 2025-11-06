#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  const int MOD = 1'000'000'009;
  vector<vector<ll>>v(2,vector<ll>(100001));//0: 홀수개 1: 짝수개
  v[0][1] = 1;
  v[0][2] = 1;
  v[1][2] = 1;
  v[0][3] = 2;
  v[1][3] = 2;
  for(ll n = 4; n<=100000; n++) {
    v[0][n] = ((v[1][n-1] + v[1][n-2])%MOD + v[1][n-3]) % MOD;
    v[1][n] = ((v[0][n-1] + v[0][n-2])%MOD + v[0][n-3]) % MOD;
  }
  int t;
  cin >> t;
  for(ll i=0; i<t; i++) {
    int n;
    cin >> n;
    cout << v[0][n] << ' ' << v[1][n] << '\n';
  }
}