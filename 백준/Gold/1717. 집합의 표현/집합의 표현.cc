#include <bits/stdc++.h>
using namespace std;
vector<int>root;
int find(int node)
{
    if(root[node] == node)
        return node;
    return root[node] = find(root[node]);
}
void unite(int a, int b)
{
    a = find(a);
    b = find(b);
    if(a != b)
        root[a] = b;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    root = vector<int>(n+1);
    for(int i=1; i<=n; i++)
        root[i] = i;
    for(int i=0; i<m; i++)
    {
        int t,a,b;
        cin >> t >> a >> b;
        switch(t)
        {
            case 0:
                unite(a,b);
            break;
            case 1:
            if(find(a) == find(b))
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
            break;
        }
    }
}