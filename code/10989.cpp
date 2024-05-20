#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);
    int n;
    cin >> n;
    int count[10001]{0};
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        count[tmp]++;
    }
    for (int i = 1; i < sizeof(count) / 4; i++)
    {
        while (count[i] > 0)
        {
            cout << i << '\n';
            count[i]--;
        }
    }
}