#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int result = 0;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        result += arr[i];
    }
    sort(arr, arr + 5);
    cout << result / 5 << '\n';
    cout << arr[2] << '\n';
}