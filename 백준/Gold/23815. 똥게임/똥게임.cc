#include<bits/stdc++.h>
using namespace std;


int calc(int start, char op, int val)
{
  if(op == '+')
    return start + val;
  if(op == '-')
    return start - val;
  if(op == '*')
    return start * val;
  else
    return start / val;
}
int main()
{
  int n;
  cin >> n;
  vector<vector<pair<char,int>>> V(n+1,vector<pair<char,int>>(2));

  for(int i=1; i<n+1; i++)
  {
    int val1, val2;
    char op1, op2;

    cin >> op1 >> val1 >> op2 >> val2;
    
    V[i][0] = make_pair(op1,val1);
    V[i][1] = make_pair(op2,val2);
  }
  
  vector<vector<int>>dp(n+1,vector<int>(5));
  dp[0][0] = dp[0][1] = 1;
  for(int i=1; i < n+1; i++)
  {
    if(dp[i-1][0] <= 0 && dp[i-1][1] <=0)
      dp[i][0] = dp[i][1] = dp[i][2] = -1;
    else
    {
      dp[i][0] = calc( max(dp[i-1][0],dp[i-1][1]), V[i][0].first, V[i][0].second);
      dp[i][1] = calc( max(dp[i-1][0],dp[i-1][1]), V[i][1].first, V[i][1].second);
      dp[i][2] = max(dp[i-1][0],dp[i-1][1]);
    }
    if(dp[i-1][2] <=0 && dp[i-1][3] <=0 && dp[i-1][4] <= 0)
      dp[i][3] = dp[i][4] = -1;
    else
    {
      dp[i][3] = calc( max(dp[i-1][2],max(dp[i-1][3], dp[i-1][4])), V[i][0].first, V[i][0].second);
      dp[i][4] = calc( max(dp[i-1][2],max(dp[i-1][3], dp[i-1][4])), V[i][1].first, V[i][1].second);
    }

    if(dp[i][0] <= 0 && dp[i][1] <= 0 && dp[i][2] <= 0 && dp[i][3] <= 0 && dp[i][4] <= 0)
    {
      cout << "ddong game";
      return 0;
    }
  }
  int ans = -1;
  for(int i=0; i<5; i++)
  {
    ans = max(ans,dp[n][i]);
  }

  cout << ans;
}