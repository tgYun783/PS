#include <iostream>
using namespace std;
int main()
{
    int n, x, y, maxX = -10000, maxY = -10000, minX = 10000, minY = 10000;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x > maxX)
            maxX = x;
        if (x < minX)
            minX = x;
        if (y > maxY)
            maxY = y;
        if (y < minY)
            minY = y;
        }
    cout << (maxX - minX) * (maxY - minY);
}