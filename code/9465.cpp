#include <iostream>
using namespace std;

int get_max(int arr[][100002], int n)
{
    int max = 0;
    int x = 0, y = 0;
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                y = i;
                x = j;
            }
        }
    }
    if (max == 0)
        return 0;
    arr[y][x] = arr[y - 1][x] = arr[y + 1][x] = arr[y][x - 1] = arr[y][x + 1] = 0;
    return max;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[4][100002]{};
        for (int i = 1; i <= 2; i++)
        {
            for (int j = 1; j <= n; j++)
                cin >> arr[i][j];
        }
        int sum = 0;
        while (1)
        {
            int tmp = get_max(arr, n);
            if (tmp == 0)
            {
                cout << sum << '\n';
                break;
            }
            sum += tmp;
        }
    }
}