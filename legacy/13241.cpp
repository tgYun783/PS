#define BOJ                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);                     \
    cout.tie(NULL);
#include <iostream>
#include <cmath>
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
    BOJ;
    long long a, b, i;
    cin >> a >> b;
    long long GCD = gcd(a, b);
    long long LCM = (a * b) / GCD;

    cout << LCM;
}