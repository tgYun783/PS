#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c;
    cin >> n >> c;
    vector<int>V(n);
    for(int i=0; i<n; i++)
        cin >> V[i];
    
    sort(V.begin(),V.end());
    
    int left = 1;
    int right = V.back()- V.front();
    int ans;
    while(left <= right)
    {
        int mid = (left + right)/2;
        int cur = V[0];
        int count = 1;
        for(auto it = V.begin() + 1; it != V.end(); it++)
        {
            if(*it - cur >= mid)
            {
                count++;
                cur = *it;
            }
        }
        if(count >= c)
        {
            ans = mid;
            left = mid+1;
        }
        else
            right = mid-1;
        

    }

    cout << ans;
}
