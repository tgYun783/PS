#include <bits/stdc++.h>
using namespace std;
int n;
vector<pair<int,int>> v;
int max_cnt = 0;
vector<bool> now_use;

void bt(int level, int cnt)
{
    if(level == n)
    {
        max_cnt = max(max_cnt,cnt);
        return;
    }
    
    if(v[level].first <= 0)
    {
        bt(level+1,cnt);
        return;
    }
    
    bool canhit = false;
    for(int i=0; i<n; i++)
    {
        int count = 0;
        if(i == level || v[i].first <= 0)
            continue;
        canhit = true;
        v[level].first -= v[i].second;
        v[i].first -= v[level].second;
        if(v[level].first <= 0)
            count++;
        if(v[i].first <= 0)
            count++;
        bt(level+1,cnt + count);
        
        v[level].first += v[i].second;
        v[i].first += v[level].second;
    }
    if(!canhit)
        bt(level+1, cnt);
    
}

int main()
{
    cin >> n;
    v = vector<pair<int,int>>(n);
    now_use = vector<bool>(n,false);
    for(int i=0; i<n; i++)
    {
        int s,w;
        cin >> s >> w;
        v[i] = make_pair(s,w);
    }

    bt(0,0);
    cout << max_cnt;
}