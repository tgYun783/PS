#include <iostream>
using namespace std;

int cash[51][51][51]{}; // a,b,c 에따른 결과값 저장

int w(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return 1;
    }
    if (a > 20 || b > 20 || c > 20)
    {
        if (cash[20][20][20] == 0)
            cash[20][20][20] = w(20, 20, 20);

        return cash[20][20][20];
    }
    if (a < b && b < c)
    {
        if (cash[a][b][c - 1] == 0)
            cash[a][b][c - 1] = w(a, b, c - 1);
        if (cash[a][b - 1][c - 1] == 0)
            cash[a][b - 1][c - 1] = w(a, b - 1, c - 1);
        if (cash[a][b - 1][c] == 0)
            cash[a][b - 1][c] = w(a, b - 1, c);
        return cash[a][b][c - 1] + cash[a][b - 1][c - 1] - cash[a][b - 1][c];
    }
    if (cash[a - 1][b][c] == 0)
        cash[a - 1][b][c] = w(a - 1, b, c);
    if (cash[a - 1][b - 1][c] == 0)
        cash[a - 1][b - 1][c] = w(a - 1, b - 1, c);
    if (cash[a - 1][b][c - 1] == 0)
        cash[a - 1][b][c - 1] = w(a - 1, b, c - 1);
    if (cash[a - 1][b - 1][c - 1] == 0)
        cash[a - 1][b - 1][c - 1] = w(a - 1, b - 1, c - 1);
    return cash[a - 1][b][c] + cash[a - 1][b - 1][c] + cash[a - 1][b][c - 1] - cash[a - 1][b - 1][c - 1];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b, c;
    while (1)
    {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1)
            break;

        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
    }
}