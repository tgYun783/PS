#include <bits/stdc++.h>
using namespace std;
bool compare(string s1, string s2)
{
    if(s1.length() != s2.length())
        return s1.length() < s2.length();
    int s1_sum = 0;
    int s2_sum = 0;
    for(int i=0; i<s1.length(); i++)
        if(s1[i] >= '0' && s1[i] <= '9')
            s1_sum += s1[i] - '0';
    for(int i=0; i<s2.length(); i++)
        if(s2[i] >= '0' && s2[i] <= '9')
            s2_sum += s2[i] - '0';
    if(s1_sum != s2_sum)
        return s1_sum < s2_sum;
    
    return s1 < s2;
}
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end(),compare);
    for(auto t : v)
        cout << t << '\n';
}