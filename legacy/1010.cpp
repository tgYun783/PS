// 오른쪽 사이트에서 왼쪽의 사이트 수만큼 뽑는것 조합의 개념사용
//  nCr = n! / ((n-r)!*r!)
//  DP사용하여 시간 단축
/*
#include <iostream>
using namespace std;
long long cash[31] = {
    1,
    1,
};
long long factorial(int n)
{

    if (cash[n] == 0)
    {
        cash[n] = n * factorial(n - 1);
        return cash[n];
    }
    return cash[n];
}
int main()
{
    int left, right, t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> left >> right;
        cout << factorial(right) / (factorial(right - left) * factorial(left)) << '\n';
    }
}*/
//  수가 너무 커진다...
//  파스칼의 삼각형을 사용하면 이를 피할 수 있다고 한다.
#include <iostream>
using namespace std;

long long pascalComb[31][31];

void calc_comb()
{
    for (int i = 0; i <= 30; i++)
    {
        pascalComb[i][0] = pascalComb[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            pascalComb[i][j] = pascalComb[i - 1][j - 1] + pascalComb[i - 1][j];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);
    calc_comb();
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int left, right;
        cin >> left >> right;
        cout << pascalComb[right][left] << '\n';
    }
}