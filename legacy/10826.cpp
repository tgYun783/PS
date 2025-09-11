#include <iostream>
using namespace std;

class fibo
{

    unsigned long long arr[10001]{
        0,
        1,
    };

public:
    fibo() {}

    unsigned long long FIBO(int n);
};

unsigned long long fibo::FIBO(int n)
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
    fibo f;
    int n;
    cin >> n;
    cout << f.FIBO(n);
}