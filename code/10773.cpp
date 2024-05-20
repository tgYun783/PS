#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> stack;

    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp == 0)
            stack.pop_back();
        else
            stack.push_back(tmp);
    }
    int sum = 0;
    for (auto it = stack.begin(); it != stack.end(); it++)
        sum += *it;
    cout << sum;
}