#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    vector<int> origin, temp;
    int next = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        origin.push_back(tmp);
    }
    reverse(origin.begin(), origin.end());
    while (1)
    {
        if (origin.empty() && temp.empty())
        {
            cout << "Nice";
            break;
        }
        else if (origin.empty() && temp.back() != next)
        {
            cout << "Sad";
            break;
        }

        if (!origin.empty() && origin.back() == next)
        {
            origin.pop_back();
            next++;
        }
        else if (!temp.empty() && temp.back() == next)
        {
            temp.pop_back();
            next++;
        }
        else
        {
            temp.push_back(origin.back());
            origin.pop_back();
        }
    }
}