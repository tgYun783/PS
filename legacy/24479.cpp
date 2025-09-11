#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int num = 1;
void dfs(int x, bool *visited, vector<int> *graph, int *count)
{
    visited[x] = true;
    count[x] = num++;
    for (int i = 0; i < graph[x].size(); i++)
    {
        int y = graph[x][i];
        if (!visited[y])
            dfs(y, visited, graph, count);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, start;

    cin >> n >> m >> start;
    bool *visited = new bool[n + 1]();
    vector<int> *graph = new vector<int>[n + 1];
    int *count = new int[n + 1]();

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for (int i = 0; i < n; i++)
        sort(graph[i].begin(), graph[i].end());

    dfs(start, visited, graph, count);

    for (int i = 1; i < n + 1; i++)
    {
        cout << count[i] << '\n';
    }
}