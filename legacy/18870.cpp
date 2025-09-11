#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> press;
    vector<int> origin;

    for (int i = 0; i < n; i++)
    {
        int n;
        cin >> n;
        press.push_back(n);
        origin.push_back(n);
    }
    sort(press.begin(), press.end());
    press.erase(unique(press.begin(), press.end()), press.end());

    for (auto it = origin.begin(); it != origin.end(); it++)
    {
        cout << lower_bound(press.begin(), press.end(), *it) - press.begin() << " ";
    }
}