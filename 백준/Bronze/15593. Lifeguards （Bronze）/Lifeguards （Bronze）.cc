#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> V(1001);
    vector<pair<int,int>> worker;
    
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin >> a >> b;
        for(int t = a; t<b; t++)
            V[t]++;
        worker.push_back(make_pair(a,b));
    }
    int ans = -1;
    for(auto w : worker)
    {
        int time = 0;
        for(int i = w.first; i < w.second; i++)
        {
            V[i]--;
        }
        for(auto t : V)
            if(t > 0)
                time++;
        
        ans = max(time,ans);
        for(int i = w.first; i < w.second; i++)
        {
            V[i]++;
        }
    }
    cout << ans;
}