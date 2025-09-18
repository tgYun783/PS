#include <bits/stdc++.h>
using namespace std;

int solution(string a, string b)
{
  
  if(a.size() != b.size())
    return 0;
  int count =0;
  for(int i=0; i<a.size(); i++)
  {
    if(a[i] !=b[i])
      return count;
    if(a[i] == '8')
      count++;
  }
  return count;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  string a, b;
  cin >> a >> b;
  cout << solution(a,b);
}