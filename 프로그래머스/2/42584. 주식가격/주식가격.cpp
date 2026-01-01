#include<bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> prices) {
    stack<int> s;
    int n = prices.size();
    vector<int> answer(n);
    
    for(int i=0; i<n; i++) {
        while(!s.empty() && prices[s.top()] > prices[i]) {
            int t = s.top();
            answer[t] = i - t;
            s.pop();
            
        }
        s.push(i);
    }
    while(!s.empty()) {
        int t = s.top();
        answer[t] = n-1 -t;
        s.pop();
    }
    return answer;
}