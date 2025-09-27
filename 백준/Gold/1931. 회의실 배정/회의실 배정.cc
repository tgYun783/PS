#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>>v(n);
    for(int i=0; i<n; i++)
    {
        int start, end;
        cin >> start >> end;
        v[i] = make_pair(start,end);
    }
    sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b) {if(a.second == b.second) return a.first < b.first; 
        return a.second < b.second;});

    

    int cnt = 0;
    int end = 0;

    for(auto p : v)
    {
        if(p.first >= end)
        {
            cnt++;
            end = p.second;
        }
    }
    
    cout << cnt;
}