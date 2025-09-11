#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);
    queue<int> Queue;

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        if (s == "push")
        {
            int n;
            cin >> n;
            Queue.push(n);
        }
        else if (s == "pop")
        {
            if (Queue.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << Queue.front() << '\n';
                Queue.pop();
            }
        }
        else if (s == "size")
            cout << Queue.size() << '\n';
        else if (s == "empty")
            cout << Queue.empty() << '\n';
        else if (s == "front")
        {
            if (Queue.empty())
            {
                cout << -1 << '\n';
            }
            else
                cout << Queue.front() << '\n';
        }
        else if (s == "back")
        {
            if (Queue.empty())
            {
                cout << -1 << '\n';
            }
            else
                cout << Queue.back() << '\n';
        }
    }
}
