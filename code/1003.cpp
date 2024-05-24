#include <iostream>
using namespace std;

class fibo
{

    long long arr[41]{
        0,
        1,
    };

public:
    fibo() {}

    long long FIBO(int n);
};

long long fibo::FIBO(int n)
{
    if (n == 0 || n == 1)
        return arr[n];
    else if (arr[n] == 0)
    {
        arr[n] = FIBO(n - 1) + FIBO(n - 2);
        return arr[n];
    }
    else
        return arr[n];
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);
    int t;
    cin >> t;
    fibo f;
    for (int i = 0; i < t; i++)
    {

        int n;
        cin >> n;
        if (n == 0)
            cout << "1 0" << '\n';
        else
            cout << f.FIBO(n - 1) << ' ' << f.FIBO(n) << '\n';
    }
}