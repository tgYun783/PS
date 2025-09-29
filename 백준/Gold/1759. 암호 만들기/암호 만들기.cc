#include <bits/stdc++.h>
using namespace std;
int l, c;
vector<char>v;
vector<bool>is_used;
vector<char>ans;

void bt(int n, int start)
{
    if(n == l)
    {
        int aeiou_cout = 0;
        int else_count = 0;
        for(auto t : ans)
        {
            if ( t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u')
                aeiou_cout++;
            else
                else_count++;
        }
        if(aeiou_cout >= 1 && else_count >= 2)
        {
            for(auto t : ans)
                    cout << t;
            cout << '\n';
        }
         return;
    }

    for(int i = start; i < c; i++)
    {
        ans.push_back(v[i]);
        bt(n+1,i+1);
        ans.pop_back();
    }
}
int main()
{
    cin >> l >> c;
    v = vector<char>(c);
    is_used = vector<bool>(c,false);
    for(int i=0; i<c; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    bt(0,0);
}