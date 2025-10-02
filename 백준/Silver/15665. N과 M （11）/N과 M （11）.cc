#include <bits/stdc++.h>
using namespace std;
set<int> s;
int n, m;
vector<int> v;
void bt(int level)
{
    if(level == m)
    {
        for(auto t : v)
            cout << t << ' ';
        cout << '\n';
        return;
    }

    for(auto i = s.begin(); i!= s.end(); i++)
    {
        v.push_back(*i);
        bt(level+1);
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
    bt(0);
}