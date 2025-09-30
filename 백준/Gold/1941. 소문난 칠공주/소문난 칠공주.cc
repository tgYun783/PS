#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int N = 5;
const int TOTAL = 25;
const int PICK = 7;

char board[N][N];
int answer = 0;

// 1차원 인덱스를 2차원 좌표로 변환
typedef pair<int, int> pii;
pii idx2coord(int idx) {
    return {idx / N, idx % N};
}

// 7명 조합이 인접한지 확인
bool is_connected(const vector<int>& comb) {
    vector<vector<bool>> selected(N, vector<bool>(N, false));
    for (int idx : comb) {
        auto [x, y] = idx2coord(idx);
        selected[x][y] = true;
    }
    // BFS
    queue<pii> q;
    vector<vector<bool>> visited(N, vector<bool>(N, false));
    auto [sx, sy] = idx2coord(comb[0]);
    q.push({sx, sy});
    visited[sx][sy] = true;
    int cnt = 1;
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();
        for (int d = 0; d < 4; ++d) {
            int nx = x + dx[d], ny = y + dy[d];
            if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
            if (!selected[nx][ny] || visited[nx][ny]) continue;
            visited[nx][ny] = true;
            q.push({nx, ny});
            cnt++;
        }
    }
    return cnt == PICK;
}

int main() {
    // 입력
    for (int i = 0; i < N; ++i) {
        string s; cin >> s;
        for (int j = 0; j < N; ++j) {
            board[i][j] = s[j];
        }
    }
    // 25명 중 7명 조합
    vector<int> indices(TOTAL);
    for (int i = 0; i < TOTAL; ++i) indices[i] = i;
    vector<bool> sel(TOTAL, false);
    fill(sel.end() - PICK, sel.end(), true);
    do {
        vector<int> comb;
        int s_cnt = 0;
        for (int i = 0; i < TOTAL; ++i) {
            if (sel[i]) {
                comb.push_back(i);
                auto [x, y] = idx2coord(i);
                if (board[x][y] == 'S') s_cnt++;
            }
        }
        if (s_cnt < 4) continue;
        if (is_connected(comb)) answer++;
    } while (next_permutation(sel.begin(), sel.end()));
    cout << answer << '\n';
    return 0;
}