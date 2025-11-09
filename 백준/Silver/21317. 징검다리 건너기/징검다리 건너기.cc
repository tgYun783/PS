#include<bits/stdc++.h>
using namespace std;
#define MAX 5001

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    if (n == 1) {
        cout << 0 << "\n";
        return 0; // 프로그램 종료
    }
    vector<pair<int,int>> v(n+1);
    for(int i=1;i<n;i++) {
        int x,y;
        cin>>x>>y;
        v[i] = {x,y};
    }
    int k;
    cin>>k;


    vector<vector<int>> dp(n+1,vector<int>(5,MAX));
    if (n >= 2) {
        dp[2][0] = v[1].first;
    }

    if (n >= 3) {
        dp[3][0] = v[2].first + dp[2][0];
        dp[3][1] = v[1].second;
    }
    for(int i=4;i<=n;i++) {
        dp[i][0] = min(dp[i-1][0],dp[i-1][1]) + v[i-1].first;
        dp[i][1] = min(dp[i-2][0],dp[i-2][1]) + v[i-2].second;
        if (i == 4)
            dp[i][2] = k;
        else
            dp[i][2] = min(dp[i-3][0],dp[i-3][1]) + k;
        dp[i][3] = min(dp[i-1][2],min(dp[i-1][3],dp[i-1][4])) + v[i-1].first;
        dp[i][4] = min(dp[i-2][2], min(dp[i-2][3],dp[i-2][4])) + v[i-2].second;
    }
    int ans = INT_MAX;
    for (int i=0; i<=4; i++)
        ans = min(ans,dp[n][i]);
    cout<<ans<<"\n";


}