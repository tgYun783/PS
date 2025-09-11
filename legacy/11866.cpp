#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nV;
    vector<int> result;
    for (int i = 1; i <= n; i++)
    {
        nV.push_back(i);
    }
    int eraseIdx = 0;
    while (n > 0)
    {
        eraseIdx = (eraseIdx + k - 1) % n;
        result.push_back(nV[eraseIdx]);
        nV.erase(nV.begin() + eraseIdx);
        n--;
    }
    cout << "<";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
        if (i < result.size() - 1)
            cout << ", ";
    }
    cout << ">";
}