#include <bits/stdc++.h>
using namespace std;

int n, m, g, r;
vector<vector<int>> field; // 0: 호수, 1: 못씀, 2: 뿌릴 수 있음
vector<pair<int, int>> can_sprinkle;
int max_count = 0;

struct State {
    int color; // 0: 없음, 1: 초록, 2: 빨강, 3: 꽃
    int time;
};

int bfs(const vector<pair<int, int>>& green, const vector<pair<int, int>>& red) {
    int N = field.size(), M = field[0].size();
    vector<vector<State>> visit(N, vector<State>(M, {0, -1}));
    queue<tuple<int, int, int, int>> q; // x, y, color, time
    for (auto& p : green) {
        visit[p.first][p.second] = {1, 0};
        q.emplace(p.first, p.second, 1, 0);
    }
    for (auto& p : red) {
        visit[p.first][p.second] = {2, 0};
        q.emplace(p.first, p.second, 2, 0);
    }
    int flower = 0;
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    while (!q.empty()) {
        auto [x, y, color, t] = q.front(); q.pop();
        if (visit[x][y].color == 3) continue; // 꽃
        for (int d = 0; d < 4; ++d) {
            int nx = x + dx[d], ny = y + dy[d];
            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (field[nx][ny] == 0) continue;
            if (visit[nx][ny].color == 0) {
                visit[nx][ny] = {color, t+1};
                q.emplace(nx, ny, color, t+1);
            } else if (visit[nx][ny].color == 1 && color == 2 && visit[nx][ny].time == t+1) {
                visit[nx][ny].color = 3; // 꽃
                ++flower;
            } else if (visit[nx][ny].color == 2 && color == 1 && visit[nx][ny].time == t+1) {
                visit[nx][ny].color = 3; // 꽃
                ++flower;
            }
        }
    }
    return flower;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> g >> r;
    field.assign(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> field[i][j];
            if (field[i][j] == 2) can_sprinkle.emplace_back(i, j);
        }
    }
    int K = can_sprinkle.size();
    vector<int> select(K, 0);
    fill(select.end()-g-r, select.end(), 1); // G+R개만 1로
    do {
        vector<int> color(g+r, 0);
        fill(color.end()-g, color.end(), 1); // G개만 1로(초록)
        vector<pair<int, int>> chosen;
        for (int i = 0; i < K; ++i) if (select[i]) chosen.push_back(can_sprinkle[i]);
        do {
            vector<pair<int, int>> green, red;
            for (int i = 0; i < g+r; ++i) {
                if (color[i]) green.push_back(chosen[i]);
                else red.push_back(chosen[i]);
            }
            max_count = max(max_count, bfs(green, red));
        } while (next_permutation(color.begin(), color.end()));
    } while (next_permutation(select.begin(), select.end()));
    cout << max_count << '\n';
}
