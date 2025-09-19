#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n,x;
    cin >> n;
    vector<int>V(n);
    for(int i=0; i<n; i++)
        cin >> V[i];
    cin >> x;
    int count = 0;
    sort(V.begin(), V.end());
    int start = 0;
    int end = n-1;
    int sum = V[start] + V[end];

    while(start != end)
    {
        if(sum <= x)
        {
            if(sum == x)
                count++;
            sum -= V[start];
            sum += V[++start];
        }
        else
        {
            sum -= V[end];
            sum += V[--end];
        }
    }

    cout << count;

    
}