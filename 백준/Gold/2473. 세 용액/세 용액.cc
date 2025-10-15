#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> v(n + 1);
    long long ans[4];
    long long ans_sum = 1e18;

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin() + 1, v.end());

    for (int i = 1; i < n - 1; i++)
    {
        int left = i + 1;
        int right = n;
        long long t1 = v[i];

        while (left < right)
        {
            long long t2 = v[left];
            long long t3 = v[right];
            long long t_sum = (t1 + t2 + t3);
            if (abs(t_sum) < ans_sum)
            {
                ans[1] = t1;
                ans[2] = t2;
                ans[3] = t3;
                ans_sum = abs(t_sum);
            }
            if (t_sum < 0)
                left++;
            else
                right--;
        }
    }
    cout << ans[1] << ' ' << ans[2] << ' ' << ans[3];
}