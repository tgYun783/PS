#include <bits/stdc++.h>
using namespace std;
vector<int> root;
int find(int node)
{
    if (root[node] == node)
        return node;

    return root[node] = find(root[node]);
}
bool unite(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        root[a] = b;
        return false;
    }
    return true;
}
int main()
{
    int n, m;
    cin >> n >> m;
    root = vector<int>(n + 1);
    for (int i = 1; i <= n; i++)
    {
        root[i] = i;
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        auto t = unite(a, b);
        if (t)
        {
            cout << i + 1;
            return 0;
        }
        }
    cout << 0;
}
