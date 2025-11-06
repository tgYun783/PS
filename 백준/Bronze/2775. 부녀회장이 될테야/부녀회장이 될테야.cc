#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  vector<vector<int>> dp(15,vector<int>(15));
  for(int i=1; i<=14; i++)
    dp[0][i] = i + dp[0][i-1];
  for(int floor = 1; floor <=14; floor++) {
    for(int home = 1; home <=14; home++) {
      dp[floor][home] = dp[floor-1][home] + dp[floor][home-1];
    }
  }

  int t,floor,home;
  cin >> t;
  for(int i=0; i<t; i++) {
    cin >> floor;
    cin >> home;

    cout << dp[floor][home] - dp[floor][home-1] << '\n';
  }

}