#define BOJ                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);                     \
    cout.tie(NULL);
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    BOJ;

    int a, b;
    unordered_set<int> result;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        int tmp;
        cin >> tmp;
        result.insert(tmp);
    }
    for (int i = 0; i < b; i++)
    {
        int tmp;
        cin >> tmp;

        if (result.find(tmp) != result.end())
            result.erase(tmp);
        else
            result.insert(tmp);
    }
    cout << result.size();
}