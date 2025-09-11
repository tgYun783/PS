#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    while (1)
    {
        cin >> n;
        if (n == "0")
            break;
        bool check = 1;
        for (int i = 0; i < n.size() / 2; i++)
        {
            if (n[i] != n[n.size() - 1 - i])
            {
                check = 0;
                break;
            }
        }
        if (check)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
}