#include <iostream>
using namespace std;

int main()
{
    int n, m, max = 0;
    cin >> n >> m;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index1 = 0, index2 = 1, index3 = 2;
    while (1)
    {
        int result = arr[index1] + arr[index2] + arr[index3];
        if (result <= m && result > max)
            max = result;
        if (result == m || index1 == n - 3)
            break;

        if (index3 < n - 1)
            index3++;
        else
        {
            if (index2 < n - 2)
            {
                index2++;
                index3 = index2 + 1;
            }
            else
            {
                index1++;
                index2 = index1 + 1;
                index3 = index2 + 1;
            }
        }
    }
    cout << max;
}