#include <bits/stdc++.h>
using namespace std;

long long solution(int a, int b, int  c)
{
  if(b == 0)
    return 1;
  if(b == 1)
    return a % c;
  
  long long k = solution(a, b/2, c);
  if(b % 2 == 0)
    return (k * k) % c;
  return (((k * k)%c) * (a % c)) % c;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int a, b, c;
  cin >> a >> b >> c;

  cout << solution(a,b,c) % c;


}