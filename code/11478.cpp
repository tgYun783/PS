#define BOJ                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);                     \
    cout.tie(NULL);
#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main()
{
    string s;
    unordered_set<string> result;
    cin >> s;
    int size = s.size();
    for (int len = 1; len <= size; len++)
    {
        int startidx = 0;
        for (int i = 0; i < size - len + 1; i++)
        {
            string tmp = s.substr(startidx, len);
            result.insert(tmp);
            startidx++;
        }
    }
    cout << result.size();
}