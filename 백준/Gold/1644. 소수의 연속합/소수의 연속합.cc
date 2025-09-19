#include<bits/stdc++.h>
using namespace std;
vector<bool> prime;
void eratosthenes(int t)
{
  prime = vector<bool>(t+1,true);
  prime[0] = false, prime[1] = false;
  int _ = sqrt(t);
  for(int n = 2; n <= _; n++)
  {
    if(prime[n])
    {
      for(int i = n*n; i <= t; i += n)
        prime[i] = false;
    }
  }
}

int solution(int n)
{
  eratosthenes(n);
  vector<int>V;
  for(int i=2; i<=n; i++)
    if(prime[i])
      V.push_back(i);
  
  int start = 0;
  int end = -1;
  int sum = 0;
  int count = 0;
  while(1)
  {
    if(sum < n)
    {
      end++;
      if(end >= V.size()) break; 
      sum += V[end];
    }
    else 
    {
      if(sum == n) count++;
      sum -= V[start];
      start++;
    }
  }
  return count;
    
}
int main()
{
  int n;
  cin >> n;
  cout << solution(n);
}