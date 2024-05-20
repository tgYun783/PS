#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);
    map<int, int> dic;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int key;
        cin >> key;
        if (dic.find(key) == dic.end())
        {
            dic.insert({key, 1});
        }
        else
        {
            dic.at(key)++;
        }
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int key;
        cin >> key;
        if (dic.find(key) == dic.end())
            cout << 0 << ' ';
        else
            cout << dic.at(key) << ' ';
    }
}