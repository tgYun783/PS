#include<bits/stdc++.h>
using namespace std;
vector<bool>prime;
void solution(int n)
{
  prime = vector<bool>(2*n+1,true);
  prime[1] = false;

  for(int i=2; i<=sqrt(2*n); i++)
  {
    if(prime[i])
      for(int t = i*i; t <=2*n; t+=i)
      {
        prime[t] = false;
      }
  }
}

int main()
{
  solution(123456);

  vector<int> prefix_sum(123456 * 2 + 1);
  int sum = 0;
  for(int i=1; i<=123456 * 2 + 1; i++)
  {
    if(prime[i])
      sum++;
    prefix_sum[i] = sum;
  }
  int n;
  while(1)
  {
    cin >> n;
    if(n == 0)
      break;
    
    cout << prefix_sum[2*n] - prefix_sum[n] << '\n';
    
  }
}