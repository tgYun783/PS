#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

class MAP
{
    int **map;
    int **dist;
    int row, col;
    int x_dir[4] = {-1, 1, 0, 0};
    int y_dir[4] = {0, 0, 1, -1};

public:
    MAP(int col, int row);
    ~MAP();
    void SetMap();
    int BFS();
};

MAP::MAP(int col, int row)
{
    this->row = row;
    this->col = col;
    map = new int *[row];
    dist = new int *[row];
    for (int i = 0; i < row; i++)
    {
        map[i] = new int[col]{};
        dist[i] = new int[col]{};
    }
}
MAP::~MAP()
{
    for (int i = 0; i < row; i++)
    {
        delete[] map[i];
        delete[] dist[i];
    }
    delete[] map;
    delete[] dist;
}
void MAP::SetMap()
{
    string s;
    for (int i = 0; i < row; i++)
    {
        cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            map[i][j] = s[j] - '0';
        }
    }
}

int MAP::BFS()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);

    queue<pair<int, int>> q;
    int start_x = 0, start_y = 0;
    map[start_y][start_x] = 0;
    q.push(make_pair(start_x, start_y));
    dist[start_y][start_x] = 1;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int x_new = x + x_dir[i];
            int y_new = y + y_dir[i];

            if ((0 <= x_new && x_new < col) && (0 <= y_new && y_new < row) && map[y_new][x_new] == 1)
            {
                map[y_new][x_new] = 0;
                q.push(make_pair(x_new, y_new));
                dist[y_new][x_new] = dist[y][x] + 1;
            }
        }
    }
    return dist[row - 1][col - 1];
}

int main()
{
    int n, m;
    cin >> n >> m;

    MAP Map(m, n);

    Map.SetMap();

    cout << Map.BFS();

    return 0;
}