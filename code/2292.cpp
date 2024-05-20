#include <iostream>
using namespace std;
int main()
{
    int len = 1;
    int maxRoom = 1;
    int roomNum;
    cin >> roomNum;
    while (maxRoom < roomNum)
    {
        maxRoom += 6 * len++;
    }
    cout << len;
}