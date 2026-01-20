#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums)
{
    unordered_map<int,int> um;
    int len = nums.size();
    for(auto n : nums) {
        um[n]++;
    }
    
    int answer = 0;
    answer = min(len/2,(int)um.size());
    
    return answer;
}