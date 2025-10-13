#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int count[2]{0};
    char c = s[0, 0];
    for (int i = 1; i < s.length(); i++)
    {
        if (c != s[i])
        {
            count[c - '0']++;
            c = s[i];
        }
    }
    count[s[s.length() - 1] - '0']++;

    cout << min(count[0], count[1]);
}
