#include <bits/stdc++.h>
using namespace std;
vector<int>t;
vector<bool>is_used;
int n;
int ans;
void bt(int cnt)
{
    if(cnt == n)
    {  ans++;
        return;
    }

    for(int i=0; i<n; i++)// y = t.size() x = i
    {
        if(!is_used[i])
        {
            bool z = false;
            for(int j=0; j<t.size(); j++)//y = j x = t[j]
            {
                if(abs(t[j] - i) == abs(j - (int)t.size()))
                {
                    z = true;
                    break;
                }
            }
            if(z)
                continue;
            is_used[i] = true;
            t.push_back(i);
            bt(cnt+1);
            t.pop_back();
            is_used[i] = false;
        }
    }
}

int main()
{
    
    cin >> n; 
    is_used = vector<bool>(n,false);
    bt(0);
    cout << ans;
}