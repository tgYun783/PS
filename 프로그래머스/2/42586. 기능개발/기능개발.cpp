#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int tos = 0;
    int day = 0;
    while(tos < progresses.size()) {
        while(progresses[tos] + day * speeds[tos] < 100)
            day++;
        int cnt = 1;
        tos++;
        while(tos < progresses.size() && progresses[tos] + day * speeds[tos] >= 100) {
            cnt++;
            tos++;
        }
        answer.push_back(cnt);
    }
    return answer;
}