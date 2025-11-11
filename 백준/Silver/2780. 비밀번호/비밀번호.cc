#include <bits/stdc++.h>
using namespace std;

int t, n, dp[1001][10]; 
const int MOD = 1234567;

int main()
{
    ios_base::sync_with_stdio(0); 
	cin.tie(0);

    cin >> t;

    for(int i=0; i<10; i++) dp[1][i] = 1;

    for(int i=2; i<=1000; i++) 
    {
        for(int j=0; j<10; j++) 
        {
            if(j==0) dp[i][j] = dp[i-1][7]; 
            else if(j==1) dp[i][j] = dp[i-1][2] + dp[i-1][4];
            else if(j==2) dp[i][j] = dp[i-1][1] + dp[i-1][3] + dp[i-1][5];
            else if(j==3) dp[i][j] = dp[i-1][2] + dp[i-1][6];
            else if(j==4) dp[i][j] = dp[i-1][1] + dp[i-1][5] + dp[i-1][7];
            else if(j==5) dp[i][j] = dp[i-1][2] + dp[i-1][4] + dp[i-1][6] + dp[i-1][8];
            else if(j==6) dp[i][j] = dp[i-1][3] + dp[i-1][5] + dp[i-1][9];
            else if(j==7) dp[i][j] = dp[i-1][0] + dp[i-1][4] + dp[i-1][8];
            else if(j==8) dp[i][j] = dp[i-1][5] + dp[i-1][7] + dp[i-1][9];
            else if(j==9) dp[i][j] = dp[i-1][6] + dp[i-1][8];

            dp[i][j] %= MOD;
        }
    }

    while(t--)
    {
        int result = 0;
        cin >> n;
        for(int i=0; i<10; i++)
        {
            result += dp[n][i];
        }
        cout << result%MOD << "\n";
    }

    return 0;
}