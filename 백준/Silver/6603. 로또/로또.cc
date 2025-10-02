#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int n;
vector<int>t;
void bt(int level, int start)
{
    if(level == 6)
    {
        for(int i=0; i<6; i++)
            cout << t[i] << ' ';
        cout <<'\n';
        return;
    }

    for(int i = start+1; i<n; i++)
    {
        t.push_back(v[i]);
        bt(level+1,i);
        t.pop_back();
    }
        
}
int main()
{
    
    while(1)
    {
        cin >> n;
        if(n == 0)
            return 0;
        
        v = vector<int>(n);
        v.clear();
        for(int i=0; i<n; i++)
            cin >> v[i];
        bt(0,-1);
        cout <<'\n';
    }
}
