#define BOJ                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);                     \
    cout.tie(NULL);
#include <iostream>
#include <set>
using namespace std;

int main()
{
    BOJ;
    set<int> note;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        note.clear();
        int n, m;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int tmp;
            cin >> tmp;
            note.insert(tmp);
        }
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            int tmp;
            cin >> tmp;
            if (note.find(tmp) == note.end())
                cout << 0 << '\n';
            else
                cout << 1 << '\n';
        }
    }
}