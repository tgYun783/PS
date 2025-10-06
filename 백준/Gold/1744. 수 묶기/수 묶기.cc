#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int tos = 0;
    while (tos + 1 < n && v[tos] < 1 && v[tos + 1] < 1)
    {
        sum += v[tos] * v[tos + 1];
        tos += 2;
    }
    while (tos < n && v[tos] <= 0)
    {
        sum += v[tos];
        tos++;
    }
    tos = v.size() - 1;
    while (tos - 1 >= 0 && v[tos] > 1 && v[tos - 1] > 1)
    {
        sum += v[tos] * v[tos - 1];
        tos -= 2;
    }
    while (tos >= 0 && v[tos] > 0)
    {
        sum += v[tos];
        tos--;
    }

    cout << sum;
}