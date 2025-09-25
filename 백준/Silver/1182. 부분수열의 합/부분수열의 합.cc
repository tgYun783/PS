#include <bits/stdc++.h>
using namespace std;
vector<int> V;
int cnt = 0, n, m;

void solution(int idx, int sum)
{
    sum += V[idx];
    if( sum == m )
        cnt++;
    if(idx + 1 >= n)
        return;
    
    solution(idx+1, sum);

    solution(idx+1, sum - V[idx]);
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    cin >> n >> m;

    V = vector<int>(n);

    for(int i=0; i<n; i++)
        cin >> V[i];

    solution(0, 0);

    cout << cnt;

}