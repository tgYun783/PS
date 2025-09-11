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
    void Reset();
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
    cout << n + 1 << ' ';
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
        cout << x + 1 << ' ';
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
        cout << result[i] << ' ';
}
void Graph::Reset()
{

    delete visited;
    visited = new bool[size]();
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

    graph.dfs(start - 1);

    cout << '\n';
    graph.Reset();

    graph.bfs(start - 1);
}