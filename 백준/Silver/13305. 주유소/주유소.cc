#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long>node(n);
    vector<long long>len(n-1);
 
    for(int i=0; i<n-1; i++)
        cin >> len[i];
    for(int i=0; i<n; i++)
        cin >> node[i];
    
    auto node_tos = node.begin();
    auto len_tos = len.begin();
    long long val = LONG_LONG_MAX;
    long long cost = 0;
    while(node_tos != node.end()-1)
    {
        val = min(val,*node_tos);
        cost += val * (*len_tos);
        node_tos++;
        len_tos++;
    }
    cout << cost;
}   