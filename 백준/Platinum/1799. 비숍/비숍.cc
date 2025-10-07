#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> field;
// int max_count = 0;
int ans[2] = {0, 0};
vector<int> v;
vector<int> d1, d2;

vector<int> pos[2];

void bt(int idx, int count, int color)
{
    ans[color] = max(count, ans[color]);

    for (int i = idx + 1; i < (int)pos[color].size(); i++)
    {
        int t = pos[color][i];
        int dx = t / n;
        int dy = t % n;

        if (d1[dx + dy] == 1 || d2[dx - dy + n - 1] == 1)
            continue;

        d1[dx + dy] = 1;
        d2[dx - dy + n - 1] = 1;
        bt(i, count + 1, color);
        d1[dx + dy] = 0;
        d2[dx - dy + n - 1] = 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    field = vector<int>(n * n); // row = t / n col = t % n
    d1 = vector<int>(2 * n - 1);
    d2 = vector<int>(2 * n - 1);
    for (int i = 0; i < n * n; i++)
    {
        cin >> field[i];
        if (field[i] == 1)
        {
            int x = i / n;
            int y = i % n;
            pos[(x + y) % 2].push_back(i);
        }
    }

    bt(-1, 0, 0); // 검정 칸
    bt(-1, 0, 1); // 흰 칸

    cout << ans[0] + ans[1];
}
