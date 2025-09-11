#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int n;
    cin >> n;
    deque<pair<int, int>> arr;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        arr.push_back(make_pair(tmp, i + 1));
    }

    int value;
    auto it = arr.begin();
    while (!arr.empty())
    {
        value = (*it).first;
        int ans = (*it).second;
        cout << ans << ' ';

        it = arr.erase(it);
        if (it == arr.end())
            it = arr.begin();
        if (value > 0)
        {

            for (int i = 1; i < value; i++)
            {
                it++;
                if (it == arr.end())
                    it = arr.begin();
            }
        }
        else
        {
            for (int i = value; i < 0; i++)
            {
                if (it == arr.begin())
                {
                    it = arr.end() - 1;
                    continue;
                }
                it--;
            }
        }
    }
}