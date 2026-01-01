#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> priorities, int location) {
    queue<pair<int,int>> q;
    priority_queue<int> pq;
    int answer = 0;
    for(int i=0; i<priorities.size(); i++) {
        q.push({priorities[i],i});
        pq.push(priorities[i]);
    }
    
    while(!q.empty()) {
        auto [priority, loc] = q.front();
        q.pop();
        if(priority == pq.top()) {
            pq.pop();
            answer++;
            if(loc == location)
                return answer;
        }
        else {
            q.push({priority, loc});
        }
        
        
    }
    
    return answer;
}