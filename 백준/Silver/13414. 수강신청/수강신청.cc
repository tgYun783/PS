#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, l;
    cin >> k >> l;

    unordered_map<string, int> m;
    for (int i = 0; i < l; i++)
    {
        string id;
        cin >> id;
        m[id] = i;
    }

    vector<pair<string, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), [](auto &a, auto &b)
         { return a.second < b.second; });

    int cnt = 0;
    for (auto &[id, order] : v)
    {
        if (cnt == k)
            break;
        cout << id << '\n';
        cnt++;
    }
}
