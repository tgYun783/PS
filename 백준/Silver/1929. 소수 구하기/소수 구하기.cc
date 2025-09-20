#include <bits/stdc++.h>
using namespace std;
vector<bool> is_prime;
void che(int n)
{
    is_prime = vector<bool>(n+1, true);
    is_prime[1] = false;
    int _ = sqrt(n);
    for(int i=2; i<=_; i++)
    {
        if(is_prime[i])
        {
            for(int t = i*i; t<=n; t += i)
                is_prime[t] = false;
        }
    }
}
vector<int> solution(int m,int n)
{
    che(n);
    vector<int> ans;
    for(int i=m; i<=n; i++)
        if(is_prime[i])
            ans.push_back(i);
    
    return ans;
}
int main()
{
    int m, n;
    cin >> m >> n;
    auto ans = solution(m,n);

    for(auto v : ans)
        cout << v << '\n';
    
}