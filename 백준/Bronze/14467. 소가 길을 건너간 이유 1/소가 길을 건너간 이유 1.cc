#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>V(11,-1);

    int n;
    int a, b;
    int count = 0;
    cin >> n;
    for(int i=0; i < n; i++)
    {
        cin >> a >> b;
        if(V[a] == -1)
            V[a] = b;
        else
        {
            if(V[a] != b)
            {
                count++;
                V[a] = b;
            }
        }
    }
    cout << count;

}