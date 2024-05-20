#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    bool find = 0;
    cin >> n;
    for (int i = 1; i < 1000000; i++)
    {
        int temp = i;
        string s = to_string(i);
        for (int j = 0; j < s.size(); j++)
        {
            temp += s[j] - '0';
        }
        if (temp == n)
        {
            cout << i;
            find = 1;
            break;
        }
    }
    if (!find)
        cout << 0;
}