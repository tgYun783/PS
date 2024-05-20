#define BOJ                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);                     \
    cout.tie(NULL);
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    BOJ;
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    int result = 0;
    for (int i = arr.size(); i > 0; i--)
    {
        result += i * arr.at(arr.size() - i);
    }
    cout << result;
}