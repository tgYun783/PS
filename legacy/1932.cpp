#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int **p;
    int n;
    int max;

    cin >> n;
    p = new int *[n];
    for (int i = 0; i < n; i++)
        p[i] = new int[i + 1];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cin >> p[i][j];
        }
    }
    max = p[0][0];
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0)
                p[i][j] += p[i - 1][j];
            else if (j == i)
                p[i][j] += p[i - 1][j - 1];
            else
                p[i][j] += (p[i - 1][j] > p[i - 1][j - 1] ? p[i - 1][j] : p[i - 1][j - 1]); // 삼항 연산자 두개의 값중 더 큰 값을 반환
            if (p[i][j] > max)
                max = p[i][j];
        }
    }
    cout << max;

    for (int i = 0; i < n; i++)
        delete[] p[i];
    delete[] p;
}