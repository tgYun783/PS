#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);
    map<int, string> document;
    map<string, int> reverse_document;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        document.insert({i, s});
        reverse_document.insert({s, i});
    }
    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        if (s[0] >= '0' && s[0] <= '9')
        {
            int key = stoi(s);
            auto it = document.find(key);
            cout << it->second << '\n';
        }
        else
        {
            string key = s;
            auto it = reverse_document.find(key);
            cout << it->second << '\n';
        }
    }
}