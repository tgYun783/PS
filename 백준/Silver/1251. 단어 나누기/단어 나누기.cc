#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    const auto len = s.length();
    vector<string> ans;
    for (int i=0; i<len - 2; i++)
        for (int j=i+1; j<len-1; j++) {
            string s1 = s.substr(0, i+1);
            string s2 = s.substr(i+1, j-i);
            string s3 = s.substr(j+1);
            reverse(s1.begin(), s1.end());
            reverse(s2.begin(), s2.end());
            reverse(s3.begin(), s3.end());
            string t = s1.append(s2).append(s3);
            ans.push_back(t);
        }
    sort(ans.begin(), ans.end());
    cout << ans[0];
    return 0;

}