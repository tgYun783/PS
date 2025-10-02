#include <bits/stdc++.h>
using namespace std;
set<int> s;
int n, m;
vector<int>q;
vector<int> v;
void bt(int level,int start)
{
    if(level == m)
    {
        for(auto t : v)
            cout << t << ' ';
        cout << '\n';
        return;
    }

    for(int i=start; i<q.size(); i++)
    {
        v.push_back(q[i]);
        bt(level+1,i);
        v.pop_back();
    }

}

int main()
{
    
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        int t;
        cin >> t;
        s.insert(t);
    }
    for(auto i = s.begin(); i!= s.end(); i++)
        q.push_back(*i);

    bt(0,0);
}