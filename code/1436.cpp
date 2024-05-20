#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, title_n;
    string title_s;
    int count = 0;

    cin >> n;
    for (title_n = 666; count < n; title_n++)
    {
        title_s = to_string(title_n);
        if (title_s.find("666") != -1)
        {
            count++;
        }
    }
    cout << title_n - 1;
}