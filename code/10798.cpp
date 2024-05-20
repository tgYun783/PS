#include <iostream>
#include <string>
using namespace std;

int main()
{
    char sa[16][6] = {};
    string s;

    for (int i = 0; i < 5; i++)
    {
        cin >> s;
        int size = s.size();
        for (int j = 0; j < size; j++)
        {
            sa[j][i] = s[j];
        }
    }
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (sa[i][j] != '\0')
                cout << sa[i][j];
        }
    }
}