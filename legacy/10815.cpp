#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);
    int n;
    cin >> n;
    unordered_set<int> s;
    string z = "";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        if (s.find(a) == s.end())
            z += "0 ";
        else
            z += "1 ";
    }
    cout << z;
}