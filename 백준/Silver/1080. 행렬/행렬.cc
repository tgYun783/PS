#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>>V1,vector<vector<int>>V2, int a, int b)
{
  int max_a = a-2;
  int max_b = b-2;
  int count = 0;
  for(int i=0; i<max_a; i++)
  {
    for(int j=0; j<max_b; j++)
    {
      if(V1[i][j] != V2[i][j])
      {
        for(int y = i; y<=i+2; y++)
          for(int x = j; x<=j+2; x++)
            V1[y][x] = (V1[y][x] + 1) % 2;
        count++;
      }
    }
  }
  for(int i=0; i<a; i++)
  {
    for(int j=0; j<b; j++)
    {
      if(V1[i][j] != V2[i][j])
        return -1;
    }
  }
  return count;

}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int a, b;
  cin >> a >> b;
  vector<vector<int>>V1(a,vector<int>(b)), V2(a,vector<int>(b));//V[a][b]
  char t;
  for(int i=0; i<a; i++)
  {
    for(int j=0; j<b; j++)
    {
      cin >> t;
      V1[i][j] = t-'0';
    }
  }
  for(int i=0; i<a; i++)
  {
    for(int j=0; j<b; j++)
    {
      cin >> t;
      V2[i][j] = t-'0';
    }
  }
  cout << solution(V1,V2,a,b);
}