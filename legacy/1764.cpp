#define BOJ                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    BOJ;

    unordered_set<string> s;
    vector<string> result;
    int n, m, count = 0;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        s.insert(input);
    }
    for (int i = 0; i < m; i++)
    {
        string search;
        cin >> search;
        if (s.find(search) != s.end())
        {
            result.push_back(search);
            count++;
        }
    }
    sort(result.begin(), result.end());
    cout << count << '\n';
    for (auto it = result.begin(); it != result.end(); it++)
    {
        cout << *it << '\n';
    }
}