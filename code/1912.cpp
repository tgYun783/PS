#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, tmp;
    int *p;

    cin >> n;

    p = new int[n];

    int max = -1000;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    int *hap = new int[n];
    hap[0] = p[0];
    max = p[0];

    for (int i = 1; i < n; i++)
    {
        hap[i] = (hap[i - 1] > 0 ? hap[i - 1] : 0) + p[i]; // 계속 해서 누적 합을 더해 간다 만약 누적 합이 음수가 되면 0으로 초기화 하고 그 다음 항부터 다시 누적합을 계산해 간다.
        if (max < hap[i])                                  // 최대 누적합 갱신
            max = hap[i];
    }
    cout << max;

    delete[] p;
    delete[] hap;
}