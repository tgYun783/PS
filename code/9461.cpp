#include <iostream>
#include <vector>
using namespace std;
long long int arr[101] = {0, 1, 1, 1, 2, 2};

long long int pado(int n)
{
    if (n <= 5)
        return arr[n];
    else
    {
        if (arr[n] == 0)
        {
            arr[n] = pado(n - 1) + pado(n - 5);
            return arr[n];
        }
        else
            return arr[n];
    }
}
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cout << pado(n) << '\n';
    }
}