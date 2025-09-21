#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    stack<pair<int,int>> S;//index,value
    cin >> n;
    
    
    for(int i=1; i<=n; i++)
    {
        int t;
        cin >> t;
        
        while(!S.empty() && S.top().second < t)
            S.pop();
        
        if(S.empty())
            cout << 0 << ' ';
        else
            cout << S.top().first << ' ';
        
        S.push(make_pair(i,t));
    }

    

    

}