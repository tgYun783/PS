#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        char tmp = s[i];
        if (tmp >= 'A' && tmp <= 'Z')
            s[i] = tmp - 'A' + 'a';
        else
            s[i] = tmp - 'a' + 'A';
    }
    cout << s;
}