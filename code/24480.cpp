#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

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
        sort(graph[i].begin(), graph[i].end(), compare);
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

    graph.dfs(start - 1);

    graph.ShowResult();
}