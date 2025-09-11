#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>>V(n+1);
    
    for(int i=0; i <m; i++)
    {
        int a, b;
        cin >> a >> b;
        V[a].push_back(b);
        V[b].push_back(a);
    }

    unordered_set<int> un_visited;
    for(int i = 1; i <=n; i++)
    {
        un_visited.insert(i);
    }
    int count; //연결요소 개수수
    while(!un_visited.empty())
    {
        int start = *(un_visited.begin());
        un_visited.erase(un_visited.begin());

        queue<int>Q;

        count ++;

        Q.push(start);

        while(!Q.empty())
        {
            int node = Q.front();
            Q.pop();
            for(int i=0; i<V[node].size(); i++)
            {
                auto it = un_visited.find(V[node][i]);
                if(it != un_visited.end())
                {
                    Q.push(V[node][i]);
                    un_visited.erase(it);
                }
            }
        }
    }
    cout << count;


}