#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class MAP
{
    int **map;
    int row, col;

public:
    MAP(int row, int col);
    ~MAP();
    void SetValue1(int x, int y);
    void DFS(int start_x, int start_y);
    int GetValue(int x, int y);
};
MAP::MAP(int row, int col)
{
    this->row = row;
    this->col = col;
    map = new int *[row];

    for (int i = 0; i < row; i++)
    {
        map[i] = new int[col]{};
    }
}
MAP::~MAP()
{
    for (int i = 0; i < row; i++)
        delete[] map[i];
    delete[] map;
}
void MAP::SetValue1(int x, int y)
{
    map[y][x] = 1;
}
int MAP::GetValue(int x, int y)
{
    return map[y][x];
}
void MAP::DFS(int start_x, int start_y)
{

    map[start_y][start_x] = 0;
    if (start_y - 1 >= 0 && map[start_y - 1][start_x] == 1)
        DFS(start_x, start_y - 1);
    if (start_y + 1 < row && map[start_y + 1][start_x] == 1)
        DFS(start_x, start_y + 1);
    if (start_x - 1 >= 0 && map[start_y][start_x - 1] == 1)
        DFS(start_x - 1, start_y);
    if (start_x + 1 < col && map[start_y][start_x + 1] == 1)
        DFS(start_x + 1, start_y);
}
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int count = 0;
        int col, row, num;
        cin >> col >> row >> num;
        MAP M(row, col);
        for (int j = 0; j < num; j++)
        {
            int x, y;
            cin >> x >> y;
            M.SetValue1(x, y);
        }

        for (int y = 0; y < row; y++)
        {
            for (int x = 0; x < col; x++)
            {
                if (M.GetValue(x, y) == 1)
                {
                    count++;
                    M.DFS(x, y);
                }
            }
        }
        cout << count << '\n';
    }
}