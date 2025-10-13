#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void canto(int t, int point)
{
    if (t == 1)
    {
        v[point] = 1;
        return;
    }
    int s = t / 3;
    canto(s, point);
    canto(s, point + 2 * s);
}
int main()
{
    int n;
    while (1)
    {
        cin >> n;

        if (cin.eof())
            return 0;
        int t = 1;
        for (int i = 0; i < n; i++)
            t *= 3;
        v = vector<int>(t);
        canto(t, 0);
        for (int i = 0; i < t; i++)
        {
            if (v[i] == 1)
                cout << '-';
            else
                cout << ' ';
        }
        cout << '\n';
    }
}
