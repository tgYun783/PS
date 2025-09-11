#define BOJ                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);                     \
    cout.tie(NULL);
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    BOJ;
    int n, count = 0;
    set<string> tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "ENTER")
            tmp.clear();
        else
        {
            if (tmp.find(s) == tmp.end())
            {
                tmp.insert(s);
                count++;
            }
        }
    }
    cout << count;
}