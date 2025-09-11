#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n;
    long long int *arr = new long long int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        long long int k;
        cin >> k;
        int low = 0, high = n - 1;
        bool find = 0;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] == k)
            {
                cout << "1\n";
                find = 1;
                break;
            }
            if (arr[mid] < k)
                low = mid + 1;
            else
                high = mid - 1;
        }
        if (!find)
            cout << "0\n";
    }

    delete[] arr;
}