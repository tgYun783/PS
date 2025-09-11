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

long long lcm(long long a, long long b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    BOJ;
    long long int aS, aM, bS, bM;
    cin >> aS >> aM;
    cin >> bS >> bM;
    long long LCM = lcm(aM, bM);
    long long sumS = aS * (LCM / aM) + bS * (LCM / bM);

    long long GCD = gcd(sumS, LCM);

    cout << sumS / GCD << ' ' << LCM / GCD;
}