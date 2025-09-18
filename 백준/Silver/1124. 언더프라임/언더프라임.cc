#include <bits/stdc++.h>
using namespace std;
vector<bool> is_prime;
void prime(int n)
{
  is_prime = vector<bool>(n+1,true);
  is_prime[0] = false;
  is_prime[1] = false;
  int t = sqrt(n);
  for(int i=2; i<=t; i++)
  {
    if(is_prime[i])
    {
      for(int j= i*i; j<=n; j += i)
      {
        is_prime[j] = false;
      }
    }
  }
}
int solution(int a, int b)
{
  int prime_count = 0;
  for(int i=a; i<=b; i++)
  {
    int count = 0;
    int t = i;
    for(int k=2; k*k<=t; k++)
    {
      
      
      
      while(t % k == 0)
      {
        count++;
        t /= k;
      }
    }
    if(t > 1)
      count++;
    if(is_prime[count])
      prime_count++;
  }
  return prime_count;
  
 
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int a, b;
  cin >> a >> b;
  prime(b);
  cout << solution(a,b);
  
}