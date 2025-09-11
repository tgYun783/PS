#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> arr;
void dfs(int **map, int i, int j, int &count, int size)
{
    count++;
    map[i][j] = 0;
    if (i - 1 >= 0 && map[i - 1][j] == 1)
        dfs(map, i - 1, j, count, size);
    if (i + 1 < size && map[i + 1][j] == 1)
        dfs(map, i + 1, j, count, size);
    if (j - 1 >= 0 && map[i][j - 1] == 1)
        dfs(map, i, j - 1, count, size);
    if (j + 1 < size && map[i][j + 1] == 1)
        dfs(map, i, j + 1, count, size);
}
int main()
{
    int n, count;
    cin >> n;
    int **map = new int *[n];
    int set = 0;
    vector<int> sizeT;

    for (int i = 0; i < n; i++)
    {
        map[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        for (int j = 0; j < n; j++)
        {
            map[i][j] = input[j] - '0';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (map[i][j] == 1)
            {
                count = 0;
                set++;
                dfs(map, i, j, count, n);
                sizeT.push_back(count);
            }
        }
    }
    sort(sizeT.begin(), sizeT.end());

    cout << set << '\n';
    for (auto it = sizeT.begin(); it != sizeT.end(); it++)
    {
        cout << *it << '\n';
    }
    for (int i = 0; i < n; i++)
    {
        delete[] map[i];
    }
    delete[] map;
}