#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    unordered_set<string> s;

    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        s.insert(a);
    }
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        string a;
        cin >> a;
        if (s.find(a) != s.end())
            count++;
    }
    cout << count;
}