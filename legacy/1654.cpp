    #include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int k, n; // k : 가진 케이블 수 n : 잘라서 만들어야 하는 케이블 수
    cin >> k >> n;
    long long int *arrK = new long long int[k];
    for (int i = 0; i < k; i++) // 케이블 길이 저장
        cin >> arrK[i];
    sort(arrK, arrK + k);

    long long low = 1, high = arrK[k - 1];
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long long total = 0;
        for (int i = 0; i < k; i++)
            total += arrK[i] / mid;

        if (total < n)
            high = mid - 1;
        else
            low = mid + 1;
    }

    cout << high;
    delete[] arrK;
}