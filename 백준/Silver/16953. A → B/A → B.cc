#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a,b;
    cin>>a>>b;
    queue<pair<long long,int>> q;
    q.emplace(a,0);
    while(!q.empty()) {
        long long num = q.front().first;
        long long cnt = q.front().second;
        q.pop();
        if(num == b) {
            cout<< cnt+1 << '\n';
            return 0;
        }
        long long case1 = num*2;
        long long case2 = num*10 +1;
        if (case1 <= b)
            q.emplace(case1,cnt+1);
        if (case2 <= b)
            q.emplace(case2,cnt+1);
    }
    cout<< -1;
    return 0;
}