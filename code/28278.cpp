#define BOJ                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);                     \
    cout.tie(NULL);
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    BOJ;
    vector<int> stack;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int command;
        cin >> command;
        switch (command)
        {
        case 1:
            int tmp;
            cin >> tmp;
            stack.push_back(tmp);
            break;

        case 2:
            if (stack.size() == 0)
                cout << -1 << '\n';
            else
            {
                vector<int>::iterator it = stack.end() - 1;
                cout << stack.at(stack.size() - 1) << '\n';
                stack.erase(it);
            }
            break;

        case 3:
            cout << stack.size() << '\n';
            break;

        case 4:
            if (stack.size() == 0)
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
            break;

        case 5:
            if (stack.size() == 0)
                cout << -1 << '\n';
            else
                cout << stack.at(stack.size() - 1) << '\n';
            break;
        }
    }
}
