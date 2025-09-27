#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v(n+1);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end(),greater<int>());

    int ans = 0;
    for(int i = 0; i<n; i++)
    {
        ans = max(ans,v[i] * (i + 1));
    }
    
    cout << ans;
}