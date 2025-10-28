#include <bits/stdc++.h>
using namespace std;
constexpr int mod = 1000000009;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n, m;

    cin >> n >> m;
    vector<vector<int>> matrix(n+1, vector<int>(n+1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int t;
            cin >> t;
            if (j == 1) matrix[i][j] = matrix[i-1][n] + t;
            else matrix[i][j] = matrix[i][j-1] + t;
        }
    }
    for (int i = 1; i <= m; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int sum = 0;
        for (int row = x2; row >=x1; row--) {
            if (y1 == 1) {
                sum += matrix[row][y2] - matrix[row-1][n];
            }
            else {
                sum += matrix[row][y2] - matrix[row][y1-1];
            }
        }
        cout << sum << '\n';
    }


}