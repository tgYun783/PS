#include <bits/stdc++.h>
using namespace std;
int n;
void sol(int level) {
    for (int i=0; i< n-level; i++)
        cout << ' ';
    for (int i=0; i< level*2 - 1; i++)
        cout << '*';
    cout << ' ';
    cout << '\n';
    if (level == 1)
        return;
    sol(level - 1);
    for (int i=0; i< n-level; i++)
        cout << ' ';
    for (int i=0; i< level*2 - 1; i++)
        cout << '*';
    cout << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    sol(n);
}
