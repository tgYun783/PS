#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<string, int> &a, const pair<string, int> b)
{
    if (a.second == b.second)
        return a.first > b.first;
    else
        return a.second > b.second;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    unordered_map<string, int> m;

    for (int i = 0; i < n; i++)
    {
        int id, n;
        cin >> id >> n;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            auto it = m.find(s);
            if (it != m.end())
            {
                m[s]++;
            }
            else
                m[s] = 0;
        }
    }
    vector<pair<string, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), compare);
    if (v.size() == 1)
        cout << v[0].first;
    else if (v[0].second == v[1].second)
        cout << -1;
    else
        cout << v[0].first;
}