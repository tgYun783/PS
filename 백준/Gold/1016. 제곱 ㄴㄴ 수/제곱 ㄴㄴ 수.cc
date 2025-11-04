#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll min, max;
  cin >> min >> max;
  vector<bool>v(1000001);
  ll cnt = max - min + 1;

  for(ll n = 2; n*n <= max; n++) {
    ll mok = min / (n*n);
    if(min % (n*n) != 0)
      mok++;
    while(mok * (n*n) <= max) {
      if(v[mok * (n*n) - min] == false)
      {
        v[mok * (n*n) - min] = true;
        cnt --;
      }
      mok++;
    }

  }
  cout << cnt;
}