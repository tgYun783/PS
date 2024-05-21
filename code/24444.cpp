#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Graph
{
    int size;
    bool *visited;
    vector<vector<int>> graph;
    int *result;
    int count = 1;

public:
    Graph(int n);
    void AddRelation(int a, int b);
    void Sort();
    void dfs(int n);
    void bfs(int n);
    void ShowResult();
};

Graph::Graph(int n)
{
    size = n;
    visited = new bool[n]();
    graph.resize(n);
    result = new int[n]();
}

void Graph::AddRelation(int a, int b)
{
    graph[a - 1].push_back(b - 1);
    graph[b - 1].push_back(a - 1);
}
void Graph::Sort()
{
    for (int i = 0; i < size; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }
}
void Graph::dfs(int n)
{
    visited[n] = true;
    result[n] = count++;
    for (auto it = graph[n].begin(); it != graph[n].end(); it++)
    {
        if (!visited[*it])
            dfs(*it);
    }
}
void Graph::bfs(int n)
{
    queue<int> q;
    q.push(n);
    visited[n] = true;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        result[x] = count++;
        for (auto it = graph[x].begin(); it != graph[x].end(); it++)
        {
            if (!visited[*it])
            {
                q.push(*it);
                visited[*it] = true;
            }
        }
    }
}
void Graph::ShowResult()
{
    for (int i = 0; i < size; i++)
        cout << result[i] << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, start;
    cin >> n >> m >> start;

    Graph graph(n);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph.AddRelation(a, b);
    }
    graph.Sort();

    graph.bfs(start - 1);

    graph.ShowResult();
}