#include <iostream>
#include <set>
#include <string>
using namespace std;
struct Compare
{
    bool operator()(const string &a, const string &b) const
    {

        return a > b;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);
    int n;
    set<string, Compare> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (b == "enter")
            s.insert(a);
        else
        {
            s.erase(a);
        }
    }
    for (set<string>::iterator iter = s.begin(); iter != s.end(); iter++)
        cout << *iter << '\n';
}