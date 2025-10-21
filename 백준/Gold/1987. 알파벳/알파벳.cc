#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> matrix;
int row, col;
bool used[26]{0,};
int max_len = -1;
int drow[] = {0, 0, 1, -1};
int dcol[] = {-1, 1, 0, 0};

void dfs(int r, int c, int l) {
    max_len = max(max_len, l);
    for (int i = 0; i < 4; i++) {
        int nrow = r + drow[i];
        int ncol = c + dcol[i];
        if (nrow > 0 && nrow <=row && ncol > 0 && ncol <= col) {
            if (used[matrix[nrow][ncol] - 'A'] == 0) {
                used[matrix[nrow][ncol] - 'A'] = 1;
                dfs(nrow, ncol, l+1);
                used[matrix[nrow][ncol] - 'A'] = 0;
            }
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> row >> col;
    matrix = vector<vector<char>>(row+2, vector<char>(col+2, 0));

    for (int r = 1; r<=row; r++) {
        for (int c = 1; c<=col; c++) {
            cin >> matrix[r][c];
        }
    }
    used[matrix[1][1] - 'A'] = 1;
    dfs(1,1,1);

    cout << max_len << "\n";
}