#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string,int> um;
    for(auto s : participant) 
        um[s]++;
    
    for(auto s : completion)
        um[s]--;
    for(auto [s,count] : um) {
    if(count > 0)
        answer += s;
    }
    return answer;
}