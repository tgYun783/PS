#include <bits/stdc++.h>

using namespace std;
bool comp(pair<int,int> p1, pair<int,int> p2) {
    return p1.first < p2.first;

}
int main()
{
  int n;
  cin >> n;
  vector<pair<int,int>>v(n);
  for(int i=0; i<n; i++) {
    int t;
    cin >> t;
    v[i] = {t,i};

  }
  auto dest = v;
  sort(dest.begin(),dest.end());
  map<pair<int,int>, int> m;
  for(int i=0; i<n; i++)
    m.insert({dest[i],i});

  for(int i=0; i<n; i++)
    cout << m[v[i]] << ' ';
}