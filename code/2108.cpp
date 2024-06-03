#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    vector<int> arr, bindoarr;

    int bindo[8001]{};
    int n;
    double sum;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        bindo[tmp + 4000]++;
        arr.push_back(tmp);
        sum += (double)tmp;
    }
    int avg = floor(sum / n + 0.5);

    sort(arr.begin(), arr.end());
    int centerIndex = arr.size() / 2;
    int center = arr.at(centerIndex);

    int range = arr.at(n - 1) - arr.at(0);

    int max = bindo[0];
    int maxnum = 0;
    bindoarr.push_back(maxnum);
    for (int i = 1; i <= 8000; i++)
    {
        if (max < bindo[i])
        {
            bindoarr.clear();
            max = bindo[i];
            maxnum = i;
            bindoarr.push_back(maxnum);
        }
        else if (max == bindo[i])
        {
            bindoarr.push_back(i);
        }
    }
    sort(bindoarr.begin(), bindoarr.end());
    if (bindoarr.size() > 1)
    {
        maxnum = bindoarr.at(1);
    }
    maxnum -= 4000;

    cout << avg << '\n'
         << center << '\n'
         << maxnum << '\n'
         << range;
}