#define BOJ                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);                     \
    cout.tie(NULL);
#include <iostream>
#include <cmath>
#include <set>
#include <vector>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long Gcd = arr[1] - arr[0];
    for (int i = 2; i < n; i++)
    {
        Gcd = gcd(Gcd, arr[i] - arr[i - 1]);
    }
    cout << (arr[n - 1] - arr[0]) / Gcd + 1 - n;
}