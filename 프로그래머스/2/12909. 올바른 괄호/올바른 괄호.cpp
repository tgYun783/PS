#include <bits/stdc++.h>
using namespace std;

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const string s) {
    bool answer = true;
    stack<int> stack;
    for(auto c : s) {
        if(c == '(') {
            stack.push(1);
        }
        else {
            if(stack.empty())
            {
                answer = false;
                break;
            }
            stack.pop();
        }
    }
    if(!stack.empty())
        answer = false;
    return answer;
}