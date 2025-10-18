#include <bits/stdc++.h>
using namespace std;
const string END = "123456780";
int cnt = -1;
constexpr int drow[4] = {-1, 0, 1, 0};
constexpr int dcol[4] = {0, 1, 0, -1};
unordered_set<string> visited;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "";
    for (int i=0; i<9; i++) {
        char t;
        cin >> t;
        s += t;
    }

    queue<pair<string, int>> q;
    q.push({s, 0});
    visited.insert(s);

    while(!q.empty()) {
        string current_s = q.front().first;
        int count = q.front().second;
        q.pop();

        if (current_s == END) {
            cnt = count;
            break;
        }

        int zero_index = current_s.find('0');
        int row = zero_index / 3;
        int col = zero_index % 3;

        for (int i = 0; i < 4; i++) {
            int nrow = drow[i] + row;
            int ncol = dcol[i] + col;

            if (nrow >= 0 && nrow < 3 && ncol >= 0 && ncol < 3) {
                string next_s = current_s;
                swap(next_s[row * 3 + col], next_s[nrow * 3 + ncol]);
                if (visited.find(next_s) == visited.end()) {
                    visited.insert(next_s);
                    q.push({next_s, count + 1});
                }
            }
        }
    }

    cout << cnt << '\n';
}