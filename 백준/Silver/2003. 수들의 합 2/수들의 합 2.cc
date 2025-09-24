#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    vector<int>V(n+1);

    for(int i=1; i<=n; i++)
        cin >> V[i];
    
    int left = 1;
    int right = 0;
    int sum = 0;
    int count = 0;
    while(1)
    {
        if(sum >= m)
        {
            if(sum == m)
                count++;
            sum -= V[left++];
        }
        else
        {
            if(right == n)
                break;
            sum += V[++right];
        }
    }
    cout << count;
    

    

    

}