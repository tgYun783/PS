#include <bits/stdc++.h>
using namespace std;
int n;
vector<vector<bool>> field;

void jg(int cnt, int row, int col)
{
    if (cnt == 3)
    {
        field[row][col + 2] = 1;
        field[row + 1][col + 1] = 1;
        field[row + 1][col + 3] = 1;
        for (int i = 0; i < 5; i++)
            field[row + 2][col + i] = 1;
        return;
    }
    int half = cnt / 2;
    jg(half, row, col + half);
    jg(half, row + half, col);
    jg(half, row + half, col + cnt);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    field = vector<vector<bool>>(n, vector<bool>(2 * n));
    jg(n, 0, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if (field[i][j])
                cout << '*';
            else
                cout << ' ';
        }
        cout << '\n';
    }
}