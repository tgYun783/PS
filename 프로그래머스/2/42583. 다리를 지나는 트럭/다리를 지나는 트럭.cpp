#include <bits/stdc++.h>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    queue<pair<int,int>> q; // [weight, entry_time]
    int cur_weight = 0;
    int time = 0;
    int tos = 0; 

    while(tos < truck_weights.size()) { 
        time++; 
        auto [t_weight, entry_time] = q.front();


        if (!q.empty() && time - entry_time == bridge_length) {
            cur_weight -= t_weight;
            q.pop();
        }

       
        if (cur_weight + truck_weights[tos] <= weight && q.size() < bridge_length) {
            
            q.push({truck_weights[tos], time});
            cur_weight += truck_weights[tos];
            tos++;
        } 
        
        else {
           
            if(!q.empty()) {
                
                auto[w, t] = q.front();
                time = t + bridge_length-1; 
            }
        }
    }
    return time + bridge_length; 
}