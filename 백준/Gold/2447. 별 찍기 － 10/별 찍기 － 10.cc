#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> field;
void dot(int n, int row, int col)
{
    if (n == 3)
    {
        field[row][col] = field[row][col + 1] = field[row][col + 2] = field[row + 1][col] = field[row + 1][col + 2] = field[row + 2][col] = field[row + 2][col + 1] = field[row + 2][col + 2] = 1;

        return;
    }
    int part = n / 3;
    dot(part, row, col);
    dot(part, row, col + part);
    dot(part, row, col + (2 * part));

    dot(part, row + part, col);
    dot(part, row + part, col + (2 * part));

    dot(part, row + (2 * part), col);
    dot(part, row + (2 * part), col + part);
    dot(part, row + (2 * part), col + (2 * part));
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    field = vector<vector<int>>(n, vector<int>(n, 0));
    dot(n, 0, 0);
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (field[row][col] == 1)
                cout << '*';
            else
                cout << ' ';
        }
        cout << '\n';
    }
}
