#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> priorities, int location) {
    
    int answer = 0;
    vector<int> v(priorities);
    
    sort(v.begin(),v.end());
    
    
    for(int i = 0;; i++) {
        i %= priorities.size();
        if(priorities[i] == v.back()) {
            
            if(location == i) {
                return answer + 1;
            }
            answer++;
            v.pop_back();           
        }
        
    }
    
    
    
    return answer;
}