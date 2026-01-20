#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums)
{
    unordered_set<int> us(nums.begin(),nums.end());
    int len = nums.size();
    int answer = 0;
    
    answer = min(len/2,(int)us.size());
    
    return answer;
}