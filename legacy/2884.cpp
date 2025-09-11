#include <iostream>
using namespace std;

int main()
{
    int hour, minite;

    cin >> hour >> minite;

    minite -= 45;
    if (minite < 0)
    {
        minite += 60;
        hour -= 1;
    }

    if (hour < 0)
    {
        hour += 24;
    }
    cout << hour <<  " " << minite << "\n";
}


