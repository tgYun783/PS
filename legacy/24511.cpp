#include <iostream>
#include <deque>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);
    int n;
    cin >> n;
    int *checkQueue = new int[n]{};
    deque<int> arr;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        checkQueue[i] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (checkQueue[i] == 0)
            arr.push_back(tmp);
    }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int tmp;
        cin >> tmp;
        arr.push_front(tmp);
        cout << arr.back() << ' ';
        arr.pop_back();
    }
}