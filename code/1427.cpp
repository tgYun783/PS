#include <iostream>
#include <string>
using namespace std;
int main()
{
    int arr[10] = {0};
    string s;

    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        arr[s[i] - '0']++;
    }
    for (int i = 9; i >= 0; i--)
    {
        for (int j = 0; j < arr[i]; j++)
            cout << i;
    }
    return 0;
}