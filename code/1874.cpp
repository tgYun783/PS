#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> s;
    queue<int> q;
    string result = "";

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        q.push(tmp);
    }
    s.push_back(1);
    result += "+";
    int i = 2;
    while (!s.empty() || !q.empty())
    {
        if (s.empty() || q.front() != s.back())
        {
            if (i <= n)
            {
                s.push_back(i++);
                result += "+";
            }
            else
            {
                cout << "NO";
                return 0;
            }
        }
        else
        {
            s.pop_back();
            q.pop();
            result += "-";
        }
    }
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << '\n';
}