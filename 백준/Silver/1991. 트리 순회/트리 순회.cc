#include <bits/stdc++.h>
using namespace std;
vector<char> f;
vector<char> m;
vector<char> l;
vector<vector<int>> v;
int n;
void fdfs (int node) {
    f.push_back(static_cast<char>(node + 'A'));
    if (v[node][0] != -1)
        fdfs(v[node][0]);
    if (v[node][1] != -1)
        fdfs(v[node][1]);
}
void mdfs (int node) {
    if (v[node][0] != -1)
        mdfs(v[node][0]);
    m.push_back(static_cast<char>(node + 'A'));
    if (v[node][1] != -1)
        mdfs(v[node][1]);
}
void ldfs (int node) {
    if (v[node][0] != -1)
        ldfs(v[node][0]);
    if (v[node][1] != -1)
        ldfs(v[node][1]);
    l.push_back(static_cast<char>(node + 'A'));
}
void dfs () {
    fdfs(0);
    mdfs(0);
    ldfs(0);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    cin >> n;
    v = vector<vector<int>>(n);
    for (int i = 0; i < n; i++) {
        char p, c1, c2;
        cin >> p >> c1 >> c2;
        if (c1 != '.')
            v[p - 'A'].push_back(c1 - 'A');
        else
            v[p - 'A'].push_back(-1);
        if (c2 != '.')
            v[p - 'A'].push_back(c2 - 'A');
        else
            v[p - 'A'].push_back(-1);
    }

    dfs();
    for (auto t : f)
        cout << t;
    cout << '\n';
    for (auto t : m)
        cout << t;
    cout << '\n';
    for (auto t : l)
        cout << t;
    cout << '\n';

}