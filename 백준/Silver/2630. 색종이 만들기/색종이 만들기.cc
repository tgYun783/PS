#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> field;
vector<int> ans(2);

void matrix(int n, int row, int col) {
    if (n == 0) return;
    int target = field[row][col];
    int half = n/2;
    bool flag = true;
    for (int r = row; r < row + n; r++) {
        if (!flag)
            break;
        for (int c = col; c < col + n; c++) {
            if (target != field[r][c]) {
                flag = false;
                matrix(n/2, row, col);
                matrix(n/2, row + half, col+half);
                matrix(n/2, row + half, col);
                matrix(n/2, row, col + half);
                break;
            }
        }
    }
    if (flag) {
        ans[target]++;
    }
}


int main() {
    int n;
    cin >> n;

    field = vector<vector<int>>(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> field[i][j];
        }
    }
    matrix(n, 0, 0);
    cout << ans[0] << '\n' << ans[1] << '\n';
}
